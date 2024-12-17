/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:19:16 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/17 17:23:28 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H

#define DOG_H

#include "Animal.hpp"

class Dog : public Animal
{
  public:
    Dog();
    Dog(const Dog &other);
    Dog &operator=(const Dog &rhs);
    virtual ~Dog();
    void makeSound() const;
    
};
#endif