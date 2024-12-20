/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 11:44:38 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/20 19:57:11 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_H
#define ICHARACTER_H

#include <string>
#include "AMateria.hpp"

class AMateria; // Declaración adelantada para evitar dependencias circulares.

class ICharacter
{
    public:
        virtual const std::string &getName() const = 0;
        virtual void equip(AMateria *materia) = 0;
        virtual void unequip(int index) = 0;
        virtual void use(int index, ICharacter &target) = 0;
        virtual ~ICharacter(){}
};

#endif