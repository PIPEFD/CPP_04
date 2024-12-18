/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:46:27 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/18 17:14:00 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"


AAnimal::AAnimal() : type("AAnimal")
{
    
    std::cout << " Defult Constructed AAnimal" << std::endl;
    
}

AAnimal::AAnimal(const AAnimal &other)
{
    *this = other;
    std::cout << "Copy AAnimal Constructed" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs)
{
    if(this != &rhs)
    {
        type = rhs.type;
    }
    return (*this);
}

AAnimal::~AAnimal()
{
    std::cout << "Annimal Destructed" << std::endl;
}

std::string AAnimal::getType() const
{
    return (type);
}

void AAnimal::makeSound()
{
    
}