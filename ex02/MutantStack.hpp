/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:26:58 by omakran           #+#    #+#             */
/*   Updated: 2024/05/15 01:19:26 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <stack>

template<typename T>
class MutantStack: public std::stack<T>
{
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    /* ####################################
    #          Orthodox Style             #
    # ################################### */
    
    // constructor:
    MutantStack() {};

    // copy constructor:
    MutantStack( const MutantStack<T>& mutant ) : std::stack<T>(mutant) {};

    // assignment operator:
    MutantStack&    operator=( const MutantStack<T>& mutant) {
        // this->c accesses the underlying container of the std::stack object on which the member function is called.
        this->c = mutant.c;
        return (*this);
    }

    // destructor:
    ~MutantStack() {};

    // iterators:
    iterator    begin() {
        return this->c.begin();
    }
    iterator    end() {
        return this->c.end();
    }
};

#endif

/* ````````````````````````````````````````````````````````````````` std::satck ``````````````````````````````````````````````````````````````````````````|
|                                       std::stack is a container adapter provided by the C++ Standard Library.                                           |
|        It provides a LIFO (Last In, First Out) data structure, meaning that the last element inserted into the stack is the first one to be removed.    |
|                                                                                                                                                         |
``````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````*/