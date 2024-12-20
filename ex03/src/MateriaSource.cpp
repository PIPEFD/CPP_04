/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 12:35:38 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/20 18:51:31 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MateriaSource.hpp"


Materiasource::Materiasource()
{
    for (int i = 0; i < 4; i++)
    {
        materias[i] = NULL;
    }
    std::cout << "MateriaSource Default Constructed" << std::endl;
}

Materiasource::Materiasource(const Materiasource &other)
{
    for (int i = 0; i < 4; i++)
    {
        if (other.materias[i] != NULL)
            materias[i] = other.materias[i]->clone();
        else
            materias[i] = NULL;
    }
    std::cout << "MateriaSource Copy Constructed" << std::endl;
}

Materiasource &Materiasource::operator=(const Materiasource &rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < 4; i++)
        {
            delete (materias[i]);
            materias[i] = NULL;
        }
        for (int i = 0; i < 4; i++)
        {
            if(rhs.materias[i] != NULL)
                materias[i] = rhs.materias[i]->clone();
            else
                materias[i] = NULL;                
        }
    }
    return(*this);
}

Materiasource::~Materiasource()
{
    for (int i = 0; i < 4; i++)
    {
        delete (materias[i]);
        materias[i] = NULL;
    }
    std::cout << "MateriaSource Destructed" << std::endl;
}

void Materiasource::learnMateria(AMateria *materia)
{
    for (int i = 0; i < 4; i++)
    {
        if (!materias[i])
        {
            materias[i] = materia;
            return;
        }
    }  
}
AMateria *Materiasource::createMateria(const std::string &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (materias[i] && materias[i]->gettype() == type)
            return(materias[i]->clone());
    }
    return(NULL);
}
