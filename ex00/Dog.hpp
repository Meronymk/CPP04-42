/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 04:06:15 by krochefo          #+#    #+#             */
/*   Updated: 2023/04/12 05:30:12 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Animal.hpp"
#include <string>
#include <iostream>

class Dog: public Animal
{
private:
	std::string	_type;

public:
	Dog();
	virtual ~Dog();
	Dog(Dog & ref);
	Dog & operator=(Dog const & copy);
	void makeSound() const;
	std::string getType( void ) const;
};

#endif