/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:09:59 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/18 14:19:45 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
    type = "Dog";
    brain = new Brain();
    std::cout << "Default Dog Constructed"  << std::endl; 
}

Dog::Dog(const Dog &other) : AAnimal(other)
{
    brain = new Brain(*other.brain);
    std::cout << "Copy Dog Constructed" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
    if (this !=  &rhs)
    {
        AAnimal::operator=(rhs);
        delete (brain);
        type = rhs.type;
    }
    return(*this);
}

Dog::~Dog()
{
    delete (brain);
    std::cout << " Dog Desctruted" << std::endl;
}

void Dog::makeSound()
{
    std::cout << "Guaaaaaauuuuuu Guauuuuuuu" << std::endl;
}

void Dog::getIdea()
{
    
}