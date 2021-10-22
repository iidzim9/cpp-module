/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:48:45 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/22 17:42:38 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#define SIZE 10000

int main(void){
    
    try{
        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(...){
        std::cout << "no space left" << std::endl;
    }
    try{
        Span span2 = Span(SIZE);
        std::vector<int> v1;
        srand(time(NULL));
	    for (int i = 0; i < SIZE; i++){
            int value = rand() % 10000;
		    v1.push_back(value);
	    }
        span2.addNumber(v1.begin(), v1.end());
        // span2.printVector();
        std::cout << span2.shortestSpan() << std::endl;
        std::cout << span2.longestSpan() << std::endl;
    }
    catch(...){
        std::cout << "no space left" << std::endl;
    }
    return (0);
}
