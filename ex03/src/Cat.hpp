/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipe <pipe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:02:34 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/18 23:58:00 by pipe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H

#define CAT_H

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
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