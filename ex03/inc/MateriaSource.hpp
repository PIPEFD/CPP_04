/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 12:35:41 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/20 18:47:07 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class Materiasource : public IMateriasource
{
    private:
        AMateria *materias[4];
    
    public:
        Materiasource();
        Materiasource(const Materiasource &other);
        Materiasource &operator=(const Materiasource &rhs);
        ~Materiasource();
        
        void learnMateria(AMateria *materia);
        AMateria *createMateria(const std::string  &type);
};

#endif