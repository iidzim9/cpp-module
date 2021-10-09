/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:15:58 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/09 13:06:35 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): _type("undefined"){
    std::cout << "Default Constructor Animal" << std::endl;
}

Animal::~Animal(void){}

Animal::Animal(const Animal& animal){
    *this = animal;
}

Animal::Animal(std::string type): _type(type){
}

Animal& Animal::operator=(Animal const &animal){
    this->_type = animal.getType();
    return (*this);
}

std::string Animal::getType(void) const{
    return (this->_type);
}

void Animal::set_type(std::string type){
    this->_type = type;
}

void Animal::makeSound(void) const{
    std::cout << "animal sound" << std::endl;
}
