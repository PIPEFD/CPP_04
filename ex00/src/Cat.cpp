/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:40:55 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/17 16:58:30 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat constructed" << std::endl;
}



Cat::Cat(const Cat &other)
{
    *this = other;
    std::cout << "Copy Cat Constructed" << std::endl;
}
Cat &Cat::operator=(const Cat &rhs)
{
    if (this != &rhs)
    {
        type = rhs.type;
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat Desctructed call" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Miauuuuu Miuaaaaa" << std::endl;
}