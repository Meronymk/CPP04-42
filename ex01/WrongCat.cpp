/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 05:02:33 by krochefo          #+#    #+#             */
/*   Updated: 2023/04/12 05:16:27 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat Created" << std::endl;	
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destroyed" << std::endl;	
}

WrongCat::WrongCat(WrongCat & ref)
{
	this->_type = ref.getType();
	std::cout << "WrongCat Created from copy" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & copy)
{
	this->_type = copy.type;
	return (*this);
}

std::string WrongCat::getType( void ) const
{
	return (this->_type);
}