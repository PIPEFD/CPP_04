/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:39:28 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/17 17:45:55 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
    type  =  "Dog";
    std::cout << "Dog Constructed default" << std::endl;
}

Dog::Dog(const Dog &other)
{
    *this = other;
    std::cout << "Copy Dog Cosntructed" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
    if (this !=  &rhs)
    {
        type =  rhs.type;
    }
    return(*this);
}

Dog::~Dog()
{
    std::cout <<  "Dog Destructed Called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Guaauuuuuuuu Guaaaauuuuuuuu" << std::endl;
}