/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 12:11:38 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/20 19:54:43 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Character.hpp"


Character::Character()
{
    
    std::cout << "Character Default Constructor" << std::endl;
}

Character::Character(std::string const &name) : name(name)
{
    for (int i = 0; i < 4 ; i++)
    {
        invetory[i] = NULL;
    }
}
Character::Character(const Character &other) : name(other.name)
{
    for(int i = 0; i < 4; i++)
    {
        if (other.invetory[i] != NULL)
            invetory[i] = other.invetory[i]->clone();
        else
            invetory[i] = NULL;
    }
    std::cout << "Copy Cat Constructed" << std::endl;
}

Character &Character::operator=(const Character &rhs)
{
    if (this != &rhs)
    {
        name = rhs.name;
        for (int i = 0; i < 4; i++)
        {
            delete(invetory[i]);
            invetory[i] = NULL;
        }
        for (int i = 0; i < 4; i++)
        {
            if(rhs.invetory[i] != NULL)
                invetory[i] = rhs.invetory[i]->clone();
            else
                invetory[i] = NULL;
        }
        
    }
    return(*this);
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        delete(invetory[i]);
        invetory[i] = NULL;
    }
}

std::string const &Character::getName() const
{
    return (name);
}

void Character::use(int index, ICharacter &target)
{
    if (index >= 0 && index < 4 && invetory[index])
        invetory[index]->use(target);
}

void Character::equip(AMateria *materia)
{
    for (int i = 0; i < 4; i++)
    {
        if (!invetory[i])
        {
            invetory[i] = materia;
            return;
        }
    }
}
void Character::unequip(int index)
{
    if (index >= 0 && index < 4)
        invetory[index] = NULL;
}

