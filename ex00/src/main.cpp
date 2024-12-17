/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipe <pipe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:58:00 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/17 21:39:05 by pipe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"



int main() {
    std::cout << "\n=== Creación de Objetos ===" << std::endl;

    // Crear un Dog y un Cat originales
    Dog originalDog;
    Cat originalCat;

    std::cout << "\n=== Prueba de Tipos ===" << std::endl;
    std::cout << "Dog type: " << originalDog.getType() << std::endl;
    std::cout << "Cat type: " << originalCat.getType() << std::endl;

    std::cout << "\n=== Prueba de Sonidos ===" << std::endl;
    originalDog.makeSound();
    originalCat.makeSound();

    std::cout << "\n=== Constructor de Copia ===" << std::endl;

    // Invocación explícita del constructor de copia
    Dog copiedDog(originalDog);
    Cat copiedCat(originalCat);

    std::cout << "Copied Dog type: " << copiedDog.getType() << std::endl;
    std::cout << "Copied Cat type: " << copiedCat.getType() << std::endl;

    std::cout << "\n=== Destrucción de Objetos ===" << std::endl;

    return 0;
}
