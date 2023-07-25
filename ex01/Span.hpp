/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:42:24 by blaurent          #+#    #+#             */
/*   Updated: 2023/07/22 15:48:50 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

class Span
{
private:
	std::vector<int> container;
	unsigned int size;
	Span();
public:
	Span(unsigned int N);
	Span(const Span& src);
	Span&	operator=(const Span& rhs);
	~Span();

	void			addNumber(unsigned int num);
	void			addNumber(unsigned int smallest_num, unsigned int bigest_num);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();
};


#endif