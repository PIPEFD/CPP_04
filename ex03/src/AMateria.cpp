/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 11:37:52 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/20 18:48:54 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"


AMateria::AMateria() : _type(" ")
{
    std::cout << "AMateria Default Constructor" << std::endl;   
}

AMateria::AMateria(const std::string &other) : _type(other)
{
    std::cout << "Copy AMateria Constructor" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
    if (this !=  &rhs)
    {
        _type = rhs._type;
    }
    return (*this);
}

AMateria::~AMateria()
{
    std::cout << "AMateria Destructed";   
}

std::string const &AMateria::gettype()const
{
    return (this->_type);    
}

void AMateria::use(ICharacter &target)
{
    (void)target;   
}