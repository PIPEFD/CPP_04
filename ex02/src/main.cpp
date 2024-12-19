/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:12:57 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/19 18:17:18 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    std::cout << "\n=== Creación de Objetos ===" << std::endl;
    const AAnimal *dog = new Dog();
    const AAnimal *cat = new Cat();

    std::cout << "\n=== Prueba de Sonidos ===" << std::endl;
    dog->makeSound();
    cat->makeSound();

    std::cout << "\n=== Eliminación de Objetos ===" << std::endl;
    delete dog;
    delete cat;

    std::cout << "\n=== Uso de Array Polimórfico con Clase Abstracta ===" << std::endl;
    const AAnimal *animals[4];
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();
    animals[3] = new Cat();

    std::cout << "\n=== Prueba de Polimorfismo en Array ===" << std::endl;
    for (int i = 0; i < 4; ++i) {
        animals[i]->makeSound();
    }

    std::cout << "\n=== Liberación de Objetos del Array ===" << std::endl;
    for (int i = 0; i < 4; ++i) {
        delete animals[i];
    }

    std::cout << "\n=== Prueba de Constructor de Copia Dog ===" << std::endl;
    Dog originalDog;
    originalDog.makeSound();
    Dog copiedDog(originalDog);
    copiedDog.makeSound();

    std::cout << "\n=== Prueba de Constructor de Copia Cat ===" << std::endl;
    Cat originalCat;
    originalCat.makeSound();
    Cat copiedCat(originalCat);
    copiedCat.makeSound();

    std::cout << "\n=== Prueba de Operador de Asignación clase Dog ===" << std::endl;
    Dog assignedDog;
    assignedDog = originalDog;
    assignedDog.makeSound();

    std::cout << "\n=== Prueba de Operador de Asignación clase Dog ===" << std::endl;
    Cat assignedCat;
    assignedCat = originalCat; 
    assignedCat.makeSound();

    
    

    std::cout << "\n=== Modificación de Valores ===" << std::endl;
    std::cout << "Modificando tipo en assignedDog..." << std::endl;
    assignedDog.makeSound();

    std::cout << "\n=== Finalización ===" << std::endl;

    return 0;
}
