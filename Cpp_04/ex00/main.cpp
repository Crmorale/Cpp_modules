/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 19:07:46 by crmorale          #+#    #+#             */
/*   Updated: 2026/03/11 22:52:27 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main() {
    // Test básico
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << std::endl << "--- Type Tests ---" << std::endl;
    std::cout << "Dog type: " << j->getType() << std::endl;
    std::cout << "Cat type: " << i->getType() << std::endl;
    std::cout << "Animal type: " << meta->getType() << std::endl;
    
    std::cout << std::endl << "--- Sound Tests (Polymorphic) ---" << std::endl;
    std::cout << "Cat sound: ";
    i->makeSound();  // Debe imprimir sonido de gato
    std::cout << "Dog sound: ";
    j->makeSound();  // Debe imprimir sonido de perro
    std::cout << "Generic Animal sound: ";
    meta->makeSound();
    
    std::cout << std::endl << "--- Destructors ---" << std::endl;
    delete meta;
    delete j;
    delete i;
    
    std::cout << std::endl;
	
    std::cout << "========== WRONG IMPLEMENTATION (WITHOUT VIRTUAL) ==========" << std::endl;
    std::cout << std::endl;
    
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();
    
    std::cout << std::endl << "--- Type Tests ---" << std::endl;
    std::cout << "WrongCat type: " << wrongCat->getType() << std::endl;
    std::cout << "WrongAnimal type: " << wrongMeta->getType() << std::endl;
    
    std::cout << std::endl << "--- Sound Tests (Not Polymorphic) ---" << std::endl;
    std::cout << "WrongCat sound (should be wrong): ";
    wrongCat->makeSound();  // ¡Imprimirá el sonido de WrongAnimal, NO de WrongCat!
    std::cout << "WrongAnimal sound: ";
    wrongMeta->makeSound();
    
    std::cout << std::endl << "--- Destructors ---" << std::endl;
    delete wrongMeta;
    delete wrongCat;
    
    std::cout << std::endl;
    std::cout << "========== ADDITIONAL TESTS ==========" << std::endl;
    std::cout << std::endl;
    
    // Tests adicionales: objetos en stack
    std::cout << "--- Creating objects on stack ---" << std::endl;
    Dog dog;
    Cat cat;
    
    std::cout << std::endl << "--- Stack objects sounds ---" << std::endl;
    std::cout << "Dog on stack: ";
    dog.makeSound();
    std::cout << "Cat on stack: ";
    cat.makeSound();
    
    std::cout << std::endl << "--- Copy constructor test ---" << std::endl;
    Dog dogCopy(dog);
    std::cout << "Copy makes sound: ";
    dogCopy.makeSound();
    
    std::cout << std::endl << "--- Assignment operator test ---" << std::endl;
    Cat cat2;
    cat2 = cat;
    std::cout << "Assigned cat makes sound: ";
    cat2.makeSound();
    
    std::cout << std::endl << "--- Stack destructors ---" << std::endl;
    
    return 0;
}