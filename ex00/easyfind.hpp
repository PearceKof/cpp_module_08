/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:33:27 by blaurent          #+#    #+#             */
/*   Updated: 2023/08/24 12:02:46 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <exception>

template <typename T>
typename T::iterator	easyfind(T& container, const int& value)
{
	if (container.size() == 0)
		throw std::exception();

	typename T::iterator	iter = std::find(container.begin(), container.end(), value);
	if (iter == container.end())
		throw std::exception();
	return iter;
}

#endif
