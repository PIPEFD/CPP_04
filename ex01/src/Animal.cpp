/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:12:56 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/18 17:06:27 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Default Animal Cosntructed" << std::endl;
}
Animal::Animal(const Animal &other)
{
    *this = other;
    std::cout << " Copy constructed of Animal" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs)
{
    if (this !=  &rhs)
    {
        type = rhs.type;
    }
    return(*this);
}

Animal::~Animal()
{
    std::cout << "Desutructed Animal called"  << std::endl; 
}

std::string Animal::getType() const
{
    return (type);
}

void Animal::makeSound() const
{
    
}