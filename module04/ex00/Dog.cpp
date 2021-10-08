/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:25:14 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/08 20:32:03 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"){
	std::cout << "Default Constructor Dog" << std::endl;
}

Dog::~Dog(void){
	std::cout << "Default Destructor Dog" << std::endl;
}

Dog::Dog(const Dog& dog){
	std::cout << "Copy Constructor Dog" << std::endl;
	*this = dog;
}

Dog& Dog::operator=(Dog const &dog)
{
	this->_type = dog.get_type();
	return (*this);
}

void Dog::makeSound(void){
	std::cout << "how how how" << std::endl;
}
