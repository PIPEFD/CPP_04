/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:40:32 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/18 17:11:22 by dbonilla         ###   ########.fr       */
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
        ~AAnimal();
        
        virtual void makeSound() = 0; 
        std::string getType() const;
};

#endif