/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:51:38 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/19 17:53:51 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100;  i++)
    {
        ideas[i] = "Default idea";
    }
    std::cout << " Brain Constructed" << std::endl;
}
Brain::Brain(const Brain &other)
{
    *this = other;
    std::cout << "Copy Brain Constructed" << std::endl;
}

Brain &Brain::operator=(const Brain &rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < 100; i++)
        {
            ideas[i] = rhs.ideas[i];
        }
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain Destructed" << std::endl;
}

std::string Brain::getIdea(int index) const 
{
    if (index >= 0  && index < 100)
    {
        return (ideas[index]);
    }
    return ("Invalid Index");
}

void Brain::setIdea(int index, const std::string &idea)
{
    if (index >= 0  &&  index < 100)
    {
        ideas[index] = idea;
    }
}