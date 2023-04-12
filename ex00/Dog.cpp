/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 04:06:06 by krochefo          #+#    #+#             */
/*   Updated: 2023/04/12 05:31:34 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Dog created" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destroyed" << std::endl;
}

Dog::Dog(Dog & ref)
{
	this->_type = ref.getType();
	std::cout << "Dog created from copy" << std::endl;
}

Dog & Dog::operator=(Dog const & copy)
{
	this->_type = copy._type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << this->_type << ": Bark Woof Bark" << std::endl;
}

std::string Dog::getType( void ) const
{
	return (this->_type);
}