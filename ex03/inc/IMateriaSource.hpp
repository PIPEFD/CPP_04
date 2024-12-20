/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 12:35:41 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/20 18:53:36 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"
class IMateriasource
{
    public:
        virtual ~IMateriasource(){}
        virtual void learnMateria(AMateria *materia) = 0;
        virtual AMateria *createMateria(std::string const  &type) = 0;
        
};

#endif