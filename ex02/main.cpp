/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:27:03 by omakran           #+#    #+#             */
/*   Updated: 2024/05/15 01:40:33 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    // push two integers (5 and 17) onto the stack mstack.
    mstack.push(5);
    mstack.push(17);
    std::cout << "First Element: " << mstack.top() << std::endl;
    // removes the top element from the stack.
    mstack.pop();
    std::cout << "The Size: " <<  mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    // declare iterators it and ite to iterate over the elements of `mstack`. 
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    // increment and then decrement the iterator it.
    // iterators can be thought of as pointers that point to elements within a container.
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    /*
    This line invokes the copy constructor of std::stack, which creates a new stack `s` that is a copy of mstack.
    This means that `s` will contain the same elements as mstack, and both stacks will be independent of each other.
    Any modifications made to `s` will not affect mstack, and vice versa.
    */
    std::stack<int> s(mstack);
    return 0;
}