/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipe <pipe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:40:32 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/18 23:58:59 by pipe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AANIMAL_H

#define AANIMAL_H


#include <iostream>
#include <string>

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(const AAnimal &other);
        AAnimal &operator=(const AAnimal &rhs);
        virtual ~AAnimal();
        
        virtual void makeSound() const  = 0; 
        std::string getType() const;
};

#endif