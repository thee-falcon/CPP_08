/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:30:07 by omakran           #+#    #+#             */
/*   Updated: 2024/05/14 16:34:23 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <exception>

class Span {
    unsigned int        maxSize;
    std::vector<int>    numbers;
public:
    /* ####################################
    #          Orthodox Style             #
    # ################################### */

    // constructor:
    Span( unsigned int N );
    
    // copy constructor:
    Span( const Span& other );

    // assignment operator:
    Span& operator=( const Span& other );

    // destructor:
    ~Span();

    // members functions:
    void    addNumber( int num );
    int     shortestSpan() const;
    int     longestSpan() const;
    void    addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};

#endif