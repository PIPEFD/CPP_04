/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:02:30 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/19 18:08:17 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() 
{
    type = "Cat";
    brain = new Brain();
    std::cout << "Default Cat Constructed" << std::endl;
}

Cat::Cat(const Cat &other) :  AAnimal(other)
{
    brain = new Brain(*other.brain);
    std::cout << "Copy Cat Constructed" << std::endl;
}
Cat &Cat::operator=(const Cat &rhs)
{
    if (this !=  &rhs)
    {
        AAnimal::operator=(rhs);
        if (brain)
        {
            delete (brain);
            brain = NULL;
        }
        if (rhs.brain)
        {
            brain = new Brain(*rhs.brain);
        }
    }
    return(*this);
}

Cat::~Cat()
{
    delete (brain);
    brain = NULL; 
    std::cout << "Cat Destructed" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Miauuuuuuuuuu Miauuuuu" << std::endl;
}

std::string Cat::getIdea(int index) const
{
    return (brain->getIdea(index));
}

void Cat::setIdea(int index, const std::string &idea)
{
    brain->setIdea(index, idea);
}