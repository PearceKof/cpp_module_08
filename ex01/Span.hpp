/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:42:24 by blaurent          #+#    #+#             */
/*   Updated: 2023/08/23 14:45:01 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <cstdlib>
#include <ctime>

class Span
{
private:
	unsigned int		size;
	std::vector<int>	*container;
	Span();
public:
	Span(unsigned int N);
	Span(const Span& src);
	Span&	operator=(const Span& rhs);
	~Span();

	void				addNumber(unsigned int nbr);
	void				addNumber();
	unsigned int		shortestSpan();
	unsigned int		longestSpan();

	unsigned int		getSize();

	class MaxSizeReachedException  : public std::exception
	{
	public:
		virtual const char* what() const throw() { return "Max size reached"; }
	};
	class NoSpanException  : public std::exception
	{
	public:
		virtual const char* what() const throw() { return "There is no span to found"; }
	};
};


#endif