/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 04:07:52 by krochefo          #+#    #+#             */
/*   Updated: 2023/04/12 05:35:53 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_brain = new Brain;
	this->_type = "Cat";
	std::cout << "Cat Created" << std::endl;
	std::cout << "Brain Created" << std::endl;	
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Brain destroyed" << std::endl;
	std::cout << "Cat destroyed" << std::endl;	
}

Cat::Cat(Cat & ref)
{
	this->_type = ref.getType();
	std::cout << "Cat Created from copy" << std::endl;
}

Cat & Cat::operator=(Cat const & copy)
{
	this->_type = copy._type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << this->_type << ": Meow meow meow MEOW MEOW MEOWWWW" << std::endl;
}

std::string Cat::getType( void ) const
{
	return (this->_type);
}