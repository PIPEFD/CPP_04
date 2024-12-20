/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 17:35:33 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/20 19:58:37 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cure.hpp"


Cure::Cure() : AMateria("Cure")
{
    std::cout << "Cure Default Constructed" << std::endl;
}

Cure::Cure(const Cure &other)
{
    *this = other;
    std::cout << "Cure Copy Constructed" << std::endl;
}
Cure &Cure::operator=(const Cure &rhs)
{
    if (this != &rhs)
    {
        AMateria::operator=(rhs);
    }
    return (*this);
}

Cure::~Cure()
{
    std::cout << "Cure Desctructed" << std::endl;
}

AMateria *Cure::clone() const
{
    return(new Cure(*this));    
}

void Cure::use(ICharacter &target)
{
    std::cout << "Cure: * heals " << target.getName() << "’s wounds *"<< std::endl;

}