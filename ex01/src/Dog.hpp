/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:19:16 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/18 12:06:43 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H

#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
    public:
    Dog();
    Dog(const Dog &other);
    Dog &operator=(const Dog &rhs);
    virtual ~Dog();
    void makeSound() const;
    
    void setIdea(int index, const std::string &idea);
    std::string getIdea(int index) const;
};
#endif