/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipe <pipe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:09:59 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/18 23:56:46 by pipe             ###   ########.fr       */
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

void Dog::makeSound() const
{
    std::cout << "Guaaaaaauuuuuu Guauuuuuuu" << std::endl;
}

std::string Dog::getIdea(int index) const
{
    return (brain->getIdea(index));
}

void Dog::setIdea(int index, const std::string &idea)
{
    brain->setIdea(index, idea);
}