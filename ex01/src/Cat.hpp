/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipe <pipe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:16:03 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/18 23:59:12 by pipe             ###   ########.fr       */
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
        ~Cat();
        
        void makeSound() const;
        void setIdea(int index, const std::string &idea);
        std::string getIdea(int index) const;
};

#endif