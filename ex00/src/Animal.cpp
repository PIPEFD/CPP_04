/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:36:31 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/17 17:00:18 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() :  type("Animal")
{
    std::cout << "Default Animal Constructed" << std::endl;
}

Animal::Animal(const Animal &other)
{
    *this = other;
    std::cout << "Copy of Contructor" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs)
{
    if (this !=  &rhs)
        type = rhs.type;
    return (*this);   
}

Animal::~Animal()
{
    std::cout << "Destructed  Animal to default" << std::endl; 
}

std::string Animal::getType() const
{
    return (type);
}

void Animal::makeSound() const
{
    
}