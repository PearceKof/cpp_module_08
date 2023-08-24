/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:42:44 by blaurent          #+#    #+#             */
/*   Updated: 2023/08/24 12:59:51 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
	srand(time(0));

	try
	{
		std::cout << "---subject test---" << std::endl;

		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		std::cout << "---10000 nbr with range of iterator test---" << std::endl;

		Span sp2 = Span(10000);

		std::cout << "size before: " << sp2.getSize() << std::endl;

		sp2.addNumber();

		std::cout << "size after: " << sp2.getSize() << std::endl;

		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Exception catched: " << e.what() << std::endl;
	}
	

	return 0 ;
}
