/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:13:04 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/17 17:28:16 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
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