/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:30:54 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/17 17:39:16 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout<< "Cat  Constructed Called" << std::endl;
}

Cat::Cat(const Cat &other)
{
    *this = other;
    std::cout << "Copy Cat Cosntructed" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
    if (this !=  &rhs)
    {
        type =  rhs.type;
    }
    return(*this);
}

Cat::~Cat()
{
    std::cout <<  "Cat Destructed Called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Miauuuuuuuuuu Miauuuuuuuu" << std::endl;
}