/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:31:32 by blaurent          #+#    #+#             */
/*   Updated: 2023/07/22 15:40:20 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <vector>
#include <iostream>

int	main()
{
	std::vector<int>	v1;

	v1.reserve(10);
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}

	std::cout << "---------------------------------------------" << std::endl;

	try {
		std::cout << "value is " << *easyfind(v1, 6) << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "....does not exist! " << e.what() << std::endl;
	}


	std::cout << "---------------------------------------------" << std::endl;

	try {
		std::cout << "value is " << *easyfind(v1, 42) << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "....does not exist! " << e.what() << std::endl;
	}


	std::cout << "---------------------------------------------" << std::endl;

	try {
		std::cout << "value is " << *easyfind(v1, -1) << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "....does not exist! " << e.what() << std::endl;
	}
	
	std::vector<int>	v2;

	std::cout << "---------------------------------------------" << std::endl;

	try {
		std::cout << "value is " << *easyfind(v2, 6) << std::endl;
	}
	catch (std::exception& e) {
		std::cout << "....does not exist! " << e.what() << std::endl;
	}
	

	std::cout << "---------------------------------------------" << std::endl;

}