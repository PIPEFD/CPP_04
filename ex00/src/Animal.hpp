/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:32:02 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/17 13:36:21 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
    protected:
		std::string type;
    
    public:
	 Animal();
	 Animal(const Animal &other);
	 Animal &operator=(const Animal &rhs);
	 virtual ~Animal();

	 std::string getType() const ;
	 virtual void makeSound() const ;
	
};

#endif