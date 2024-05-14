/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakran <omakran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:30:04 by omakran           #+#    #+#             */
/*   Updated: 2024/05/14 16:52:48 by omakran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : maxSize(N) {}

Span::Span(const Span& other) {
    this->maxSize = other.maxSize;
    this->numbers = other.numbers;
}

Span& Span::operator=(const Span& other) {
    if (this != &other) {
        this->maxSize = other.maxSize;
        this->numbers = other.numbers;
    }
    return *this;
}

Span::~Span(){}

void    Span::addNumber(int num) {
    if (numbers.size() >= maxSize)
        throw std::overflow_error("Maximum Capacity Reached");
    numbers.push_back(num);
}

int     Span::shortestSpan() const {
    // there are insufficient elements to compute a meaningful span between two numbers.
    if (numbers.size() <= 1)
        throw std::runtime_error("Not Enough numbers Stored!!");
    std::vector<int> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());
    // this is just an initial value; it will be updated later if a shorter span is found.
    int shortest = sortedNumbers[1] - sortedNumbers[0];
    for (size_t i = 1; i < numbers.size(); i++)
    {
        // find the shortest span.
        int span = sortedNumbers[i] - sortedNumbers[i - 1];
        if (span < shortest) {
            shortest = span;
        }
    }
    return shortest;
}

int     Span::longestSpan() const {
    if (numbers.size() <=  1)
        throw std::runtime_error("Not Enough numbers Stored!!");
    // store the min Element.
    std::vector<int>::const_iterator minElem = std::min_element(numbers.begin(), numbers.end());
    // store the max Element.
    std::vector<int>::const_iterator maxElem = std::max_element(numbers.begin(), numbers.end());
    // return the longest Span.
    return *maxElem - *minElem;
}

// `begin` and `end` are range of integers to be added to the Span.
void    Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    if (std::distance(begin, end) > maxSize)
        throw std::out_of_range("Span out of Range!");
    this->numbers.insert(this->numbers.end(), begin, end);
}