/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:30:54 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/18 12:50:39 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    brain =  new Brain();
    std::cout<< "Cat  Constructed Called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    brain = new Brain(*other.brain);
    std::cout << "Copy Cat Cosntructed" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
    if (this !=  &rhs)
    {
        Animal::operator=(rhs);
        delete (brain);
        type =  rhs.type;
    }
    return(*this);
}

Cat::~Cat()
{
    delete brain;
    std::cout <<  "Cat Destructed Called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Miauuuuuuuuuu Miauuuuuuuu" << std::endl;
}

std::string Cat::getIdea(int index) const
{
    return (brain->getIdea(index));
}

void Cat::setIdea(int index, const std::string &idea)
{
    brain->setIdea(index, idea);
}