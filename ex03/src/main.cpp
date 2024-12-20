/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 17:43:45 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/20 18:59:48 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/MateriaSource.hpp"
#include "../inc/Character.hpp"
#include "../inc/Ice.hpp"
#include "../inc/Cure.hpp"

int main() {
    Materiasource source;
    source.learnMateria(new Ice());
    source.learnMateria(new Cure());

    ICharacter *me = new Character("me");

    AMateria *tmp;
    tmp = source.createMateria("ice");
    me->equip(tmp);
    tmp = source.createMateria("cure");
    me->equip(tmp);

    ICharacter *bob = new Character("bob");

    me->use(0, *bob); // Ice: * shoots an ice bolt at bob *
    me->use(1, *bob); // Cure: * heals bob's wounds *

    delete bob;
    delete me;

    return 0;
}
