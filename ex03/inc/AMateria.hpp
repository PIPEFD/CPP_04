/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 11:58:39 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/20 19:04:43 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP

#define AMATERIA_HPP

#include <string>
#include <iostream>

#include "ICharacter.hpp"
class ICharacter;

class AMateria
{
    protected:
        std::string _type;
        
    public:
        AMateria();
        AMateria(const AMateria &other);
        AMateria(const std::string &type);
        AMateria &operator=(const AMateria &rhs);
        virtual ~AMateria();

        const std::string &gettype()const;
        virtual AMateria* clone() const  = 0;
        virtual void use(ICharacter &target);
        
};

#endif