/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 03:58:25 by krochefo          #+#    #+#             */
/*   Updated: 2023/04/12 06:01:14 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

std::string Animal::getType() const
{
	return(this->_type);
}

void Animal::makeSound() const
{
	std::cout << this->_type << ": WAAARGGGGGHHHHH!" << std::endl;	
}

Animal::Animal()
{
	std::cout << "Animal created\n";
	this->_type = "animal";
}

Animal::~Animal()
{
	std::cout << "Animal Destroyed" << std::endl;
}

Animal::Animal( Animal const & copy )
{
	*this = copy;
}

Animal &Animal::operator=(Animal const & copy)
{
	this->_type = copy._type;
	return(*this);
}
