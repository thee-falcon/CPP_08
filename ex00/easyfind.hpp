/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 16:46:16 by omakran           #+#    #+#             */
/*   Updated: 2024/05/13 17:13:25 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <stdexcept>

template<typename T>

std::string easyfind(T& container, int n) {
    typename T::iterator iter = std::find(container.begin(), container.end(), n);
    if (iter != container.end()) {
        return "Number Found";
    } else {
        throw std::runtime_error("Number not found!");
    }
}

#endif