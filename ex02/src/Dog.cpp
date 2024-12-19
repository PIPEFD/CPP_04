/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:09:59 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/19 18:06:46 by dbonilla         ###   ########.fr       */
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
    if (this != &rhs) {
        AAnimal::operator=(rhs);        
        if (brain) {
            delete brain;
            brain = NULL; 
        }        
        if (rhs.brain) {
            brain = new Brain(*rhs.brain);
        }
    }
    return (*this);
}


Dog::~Dog()
{
    delete (brain);
    brain = NULL;
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