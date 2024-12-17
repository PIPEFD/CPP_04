/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:43:38 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/17 16:55:35 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog Cosntructed" << std::endl;
}

Dog::Dog(const Dog &other)
{
    *this = other;
    std::cout << "Copy Dog Constructed" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
    if(this !=  &rhs)
    {
        type = rhs.type;
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog Desctructed" << std::endl;
}

void Dog::makeSound() const
{
    std::cout <<  "Guauuuu Guauuu" << std::endl;
}