/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:45:25 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/19 18:17:57 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    
    const Animal *dog = new Dog();
    const Animal *cat = new Cat();

    std::cout << "\n=== Testing Types ===" << std::endl;
    std::cout << "Dog type: " << dog->getType() << std::endl;
    std::cout << "Cat type: " << cat->getType() << std::endl;

    std::cout << "\n=== Testing Sounds ===" << std::endl;
    cat->makeSound();
    dog->makeSound();

    std::cout << "\n=== Testing Copy Constructor ===" << std::endl;
    Dog originalDog;              
    originalDog.setIdea(0, "I want a bone!");
    std::cout << "Original Dog idea[0]: " << originalDog.getIdea(0) << std::endl;

    Dog copiedDog(originalDog);   
    std::cout << "Copied Dog idea[0]: " << copiedDog.getIdea(0) << std::endl;

    
    copiedDog.setIdea(0, "I want to run!");
    std::cout << "Original Dog idea[0]: " << originalDog.getIdea(0) << std::endl;
    std::cout << "Copied Dog idea[0]: " << copiedDog.getIdea(0) << std::endl;
    copiedDog.makeSound();
    std::cout << "\n=== Deleting Objects ===" << std::endl;
    delete dog;
    delete cat;

    return (0);
}
