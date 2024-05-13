/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 16:46:16 by omakran           #+#    #+#             */
/*   Updated: 2024/05/13 17:23:56 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ##################################################################### Iterators: ###############################################################################################################
#                                                                                                                                                                                                 #                                                                          
#    An iterator is an object (like a pointer) that points to an element inside the container. We can use iterators to move through the contents of the container.                                #
#    They can be visualized as something similar to a pointer pointing to some location and we can access the content at that particular location using them.                                     #
#    Iterators play a critical role in connecting algorithm with containers along with the manipulation of data stored inside the containers. The most obvious form of an iterator is a pointer.  #
#    A pointer can point to elements in an array and can iterate through them using the increment operator (++). But, all iterators do not have similar functionality as that of pointers.        #
#                                                                                                                                                                                                 #
##################################################################################################################################################################################################*/

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

/* `````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````|
|    Input Iterators: They are the weakest of all the iterators and have very limited functionality.                                                                                                |
|                 They can only be used in a single-pass algorithms, i.e., those algorithms which process the container sequentially, such that no element is accessed more than once.              |
|                                                                                                                                                                                                   |
|   Output Iterators: Just like input iterators, they are also very limited in their functionality and can only be used in single-pass algorithm,                                                   |
|                  but not for accessing elements, but for being assigned elements.                                                                                                                 |
|                                                                                                                                                                                                   |
|    Forward Iterator: They are higher in the hierarchy than input and output iterators, and contain all the features present in these two iterators.                                               |
|                  But, as the name suggests, they also can only move in a forward direction and that too one step at a time.                                                                       |
|                                                                                                                                                                                                   |
|    Bidirectional Iterators: They have all the features of forward iterators along with the fact that they overcome the drawback of forward iterators,                                             |
|                         as they can move in both the directions, that is why their name is bidirectional.                                                                                         |
|                                                                                                                                                                                                   |                
|    Random-Access Iterators: They are the most powerful iterators. They are not limited to moving sequentially, as their name suggests,                                                            |
|                         they can randomly access any element inside the container. They are the ones whose functionality are same as pointers.                                                    |
```````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````` */