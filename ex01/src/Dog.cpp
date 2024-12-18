/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:39:28 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/18 12:50:30 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog()
{
    type  =  "Dog";
    brain =  new Brain();
    std::cout << "Dog Constructed default" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    brain = new Brain(*other.brain);
    std::cout << "Copy Dog Constructed" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
    if (this !=  &rhs)
    {
        Animal::operator=(rhs);
        delete brain;
        type =  rhs.type;
    }
    return(*this);
}

Dog::~Dog()
{
    delete brain;
    std::cout <<  "Dog Destructed Called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Guaauuuuuuuu Guaaaauuuuuuuu" << std::endl;
}

void Dog::setIdea(int index, const std::string &idea)
{
    brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const
{
    return (brain->getIdea(index));
}