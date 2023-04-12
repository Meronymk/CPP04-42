/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 05:03:33 by krochefo          #+#    #+#             */
/*   Updated: 2023/04/12 05:08:08 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

std::string WrongAnimal::getType() const
{
	return(this->_type);
}

void WrongAnimal::makeSound() const
{
	std::cout << this->_type << ": WAAARGGGGGHHHHH!" << std::endl;	
}

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal created\n";
	this->_type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destroyed" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const & copy )
{
	*this = copy;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const & copy)
{
	this->_type = copy._type;
	return(*this);
}
