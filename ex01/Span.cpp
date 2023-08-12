/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:42:31 by blaurent          #+#    #+#             */
/*   Updated: 2023/07/27 16:00:09 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : size(N), container(new std::vector<int>[size])
{
}

Span::Span(const Span& src) : size(src.size), container(NULL)
{
	*this = src;
}

Span::~Span()
{
	delete [] this->container;
}

Span&	Span::operator=(const Span& rhs)
{
	if (this != &rhs)
	{
		if (this->container != NULL)
			delete [] this->container;
		this->size = rhs.size;
		std::vector<int> *newVector = new std::vector<int>[rhs.container->size()];
		std::copy(rhs.container->begin(), rhs.container->end(), std::back_inserter(*newVector));
		this->container = newVector;
	}
	return (*this);
}

void	Span::addNumber(unsigned int nbr)
{
	if (this->container->size() >= size)
		throw Span::MaxSizeReachedException();
	this->container->push_back(nbr);
}



unsigned int		Span::shortestSpan()
{
	if (this->size <= 1)
		throw Span::NoSpanException();

	std::vector<int> newVector(this->container->size(), 0);
	std::adjacent_difference(this->container->begin(), this->container->end(), newVector.begin());

	std::vector<int>::iterator iter;
	for (iter = newVector.begin(); iter != newVector.end(); ++iter)
		*iter = std::abs(*iter);

	return (*std::min_element(newVector.begin() + 1, newVector.end()));
}

unsigned int		Span::longestSpan()
{
	if (this->size <= 1)
		throw Span::NoSpanException();

	std::vector<int> newVector(this->container->size(), 0);
	std::adjacent_difference(this->container->begin(), this->container->end(), newVector.begin());

	std::vector<int>::iterator iter;
	for (iter = newVector.begin(); iter != newVector.end(); ++iter)
		*iter = std::abs(*iter);

	return (*std::max_element(newVector.begin() + 1, newVector.end()));
}