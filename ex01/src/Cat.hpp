/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:16:03 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/18 11:58:50 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H

#define  CAT_H

#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(const Cat &other);
        Cat &operator=(const Cat &rhs);
        virtual ~Cat();
        
        void makeSound() const;
        void setIdea(int index, const std::string &idea);
        std::string getIdea(int index) const;
};

#endif