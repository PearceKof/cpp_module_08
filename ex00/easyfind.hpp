/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blaurent <blaurent@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:33:27 by blaurent          #+#    #+#             */
/*   Updated: 2023/07/22 15:39:47 by blaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <exception>

template <typename T>
typename T::iterator	easyfind(T& container, int value)
{
	if (container.size() == 0)
		throw std::exception();

	typename T::iterator	iter = std::find(container.begin(), container.end(), value);
	if (iter == container.end())
		throw std::exception();
	return iter;
}

#endif
