/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 03:27:23 by krochefo          #+#    #+#             */
/*   Updated: 2023/04/12 05:59:09 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal	*(animal_array[4]);
	std::cout << std::endl;

	for (int i = 0; i < 2; i++)
		animal_array[i] = new Dog();
	std::cout << std::endl;

	for (int i = 2; i < 4; i++)
		animal_array[i] = new Cat();
	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
		delete animal_array[i];
	std::cout << std::endl;

	const Animal* doggo = new Dog();
	const Animal* copy_doggo = doggo;
	std::cout<< "dog copied into copy_doggo" << std::endl;
	std::cout<< "dog ptr:" << &doggo << std::endl;
	std::cout<< "copy_doggo ptr:" << &copy_doggo << std::endl;
	std::cout<< "ptr not the same so not by ref" << std::endl;
	delete doggo;


	
	return 0;
}