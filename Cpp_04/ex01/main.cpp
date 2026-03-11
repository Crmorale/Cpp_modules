/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmorale <crmorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 19:07:46 by crmorale          #+#    #+#             */
/*   Updated: 2026/03/12 00:08:18 by crmorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() {
    std::cout << "========== MAIN TEST: ARRAY OF ANIMALS ==========" << std::endl;
    std::cout << std::endl;
    
    // Crear array de 6 animales: mitad Dogs, mitad Cats
    const int arraySize = 6;
    Animal* animals[arraySize];
    
    std::cout << "--- Creating array of animals ---" << std::endl;
    for (int i = 0; i < arraySize; i++) {
        if (i < arraySize / 2) {
            std::cout << "\nCreating Dog " << i << ":" << std::endl;
            animals[i] = new Dog();
        } else {
            std::cout << "\nCreating Cat " << i << ":" << std::endl;
            animals[i] = new Cat();
        }
    }
    
    std::cout << "\n\n--- Making sounds ---" << std::endl;
    for (int i = 0; i < arraySize; i++) {
        std::cout << animals[i]->getType() << " says: ";
        animals[i]->makeSound();
    }
    
    std::cout << "\n\n--- Deleting all animals ---" << std::endl;
    for (int i = 0; i < arraySize; i++) {
        std::cout << "\nDeleting " << animals[i]->getType() << ":" << std::endl;
        delete animals[i];
    }
    
    std::cout << "\n\n========== DEEP COPY TESTS ==========" << std::endl;
    std::cout << "\n--- Testing Dog deep copy ---" << std::endl;
    Dog* dog1 = new Dog();
    Dog* dog2 = new Dog(*dog1);  // Copy constructor
    
    std::cout << "\nDeleting original dog:" << std::endl;
    delete dog1;
    
    std::cout << "\nCopy still works:" << std::endl;
    dog2->makeSound();
    
    std::cout << "\nDeleting copy:" << std::endl;
    delete dog2;
    
    std::cout << "\n--- Testing Cat deep copy ---" << std::endl;
    Cat* cat1 = new Cat();
    Cat* cat2 = new Cat();
    *cat2 = *cat1;  // Assignment operator
    
    std::cout << "\nDeleting original cat:" << std::endl;
    delete cat1;
    
    std::cout << "\nCopy still works:" << std::endl;
    cat2->makeSound();
    
    std::cout << "\nDeleting copy:" << std::endl;
    delete cat2;
    
    std::cout << "\n\n========== STACK TESTS ==========" << std::endl;
    std::cout << "\n--- Creating on stack ---" << std::endl;
    Dog stackDog;
    Cat stackCat;
    
    std::cout << "\n--- Stack sounds ---" << std::endl;
    stackDog.makeSound();
    stackCat.makeSound();
    
    std::cout << "\n--- Stack destructors ---" << std::endl;
    
    return 0;
}