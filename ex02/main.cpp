/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 16:22:57 by blaurent          #+#    #+#             */
/*   Updated: 2023/08/24 12:45:37 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

int main()
{
	std::cout << "---empty test---" << std::endl;
	MutantStack<int> mstack;

	if ( mstack.empty() == true )
		std::cout << "1 mstack is empty" << std::endl;
	
	mstack.push(5);
	mstack.push(17);

	//now it's not empty
	if ( mstack.empty() == true )
		std::cout << "2 mstack is empty" << std::endl;

	std::cout << "---top test---" << std::endl;
	std::cout << "before pop: " << mstack.top() << " is the value at the top" << std::endl;

	mstack.pop();

	std::cout << "after pop: " << mstack.top() << " is the value at the top" << std::endl;

	std::cout << "stack size is " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(4);
	mstack.push(5);
	mstack.push(6);
	mstack.push(0);

	std::cout << "and now the size is " << mstack.size() << std::endl;

	std::cout << "---iterator test---" << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator itend = mstack.end();

	++it;
	--it;

	while (it != itend)
	{
		std::cout << "[" << *it << "]";
		++it;
	}
	
	std::cout << std::endl;

	std::stack<int> s(mstack);

	return 0;
}

// #include <list>
// int main()
// {
// 	std::cout << "---empty test---" << std::endl;
// 	std::list<int> mstack;

// 	if ( mstack.empty() == true )
// 		std::cout << "1 mstack is empty" << std::endl;
	
// 	mstack.push_back(5);
// 	mstack.push_back(17);

// 	//now it's not empty
// 	if ( mstack.empty() == true )
// 		std::cout << "2 mstack is empty" << std::endl;

// 	std::cout << "---top test---" << std::endl;
// 	std::cout << "before pop: " << mstack.back() << " is the value at the top" << std::endl;

// 	mstack.pop_back();

// 	std::cout << "after pop: " << mstack.back() << " is the value at the top" << std::endl;

// 	std::cout << "stack size is " << mstack.size() << std::endl;

// 	mstack.push_back(3);
// 	mstack.push_back(5);
// 	mstack.push_back(737);
// 	mstack.push_back(4);
// 	mstack.push_back(5);
// 	mstack.push_back(6);
// 	mstack.push_back(0);

// 	std::cout << "and now the size is " << mstack.size() << std::endl;

// 	std::cout << "---iterator test---" << std::endl;

// 	std::list<int>::iterator it = mstack.begin();
// 	std::list<int>::iterator itend = mstack.end();

// 	++it;
// 	--it;

// 	while (it != itend)
// 	{
// 		std::cout << "[" << *it << "]";
// 		++it;
// 	}
	
// 	std::cout << std::endl;

// 	return 0;
// }