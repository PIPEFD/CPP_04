/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:32:59 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/18 14:06:22 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H

#define DOG_H

#include "AAnimal.hpp";
#include "Brain.hpp";

class Dog : public AAnimal
{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(const Dog &other);
        Dog &operator=(const Dog &rhs);
        ~Dog();

        void makeSound();
        void setIdea(int index, const std::string &idea);
        std::string getIdea(int index) const;
    
};

#endif