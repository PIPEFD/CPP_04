/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 17:14:28 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/20 18:51:02 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Ice.hpp"

Ice::Ice() : AMateria("Ice")
{
    std::cout << "Ice Default Constructed" << std::endl;
}

Ice::Ice(const Ice &other)
{
    *this = other;
    std::cout << "Ice Copy Constructed" << std::endl;
}

Ice &Ice::operator=(const Ice &rhs)
{
    if (this !=  &rhs)
    {
        AMateria::operator=(rhs);
    }
    return(*this);
}

Ice::~Ice()
{
    std::cout << "Ice Destructed" << std::endl;
}
AMateria *Ice::clone() const
{
    return(new Ice(*this));    
}
void Ice::use(ICharacter &target)
{
	std::cout << "Ice: * shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
