/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:29:58 by omakran           #+#    #+#             */
/*   Updated: 2024/05/14 17:17:22 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp = Span(6);
    try {
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11); // This line will throw an overflow_error
    } catch (const std::overflow_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    std::cout << sp.shortestSpan() << std::endl; // should print: 2 
    std::cout << sp.longestSpan() << std::endl; // should print: 14 
    return 0;
}
