/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:28:08 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/17 16:51:23 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H

#define CAT_H

#include "Animal.hpp"

class Cat : public Animal
{

    public:
        Cat();
        Cat(const Cat &other);
        Cat &operator=(const Cat &rhs);
        ~Cat();
    void makeSound() const;        
};

#endif