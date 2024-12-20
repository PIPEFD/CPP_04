/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 13:24:11 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/20 19:04:31 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria *invetory[4];
    public:
        Character();
        Character(const std::string &name);
        Character(const Character &other);
        Character &operator=(const Character &rhs);
        ~Character();
        
        std::string const &getName() const;
        void equip(AMateria *materia) ;
        void unequip(int index);
        void use(int index, ICharacter &target);
};

#endif