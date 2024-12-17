/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:58:00 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/17 17:45:23 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    // const Animal *meta = new Animal();
    const Animal *dog = new Dog();
    const Animal *cat = new Cat();

    std::cout << "\n=== Testing Types ===" << std::endl;
    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl;

    std::cout << "\n=== Testing Sounds ===" << std::endl;
    cat->makeSound();
    dog->makeSound();
    // meta->makeSound();

    std::cout << "\n=== Deleting Objects ===" << std::endl;
    // delete meta;
    delete dog;
    delete cat;

    return 0;
}
