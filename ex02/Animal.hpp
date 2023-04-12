/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 03:58:44 by krochefo          #+#    #+#             */
/*   Updated: 2023/04/12 06:06:52 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <string>
#include <iostream>

class Animal{
protected:
	std::string _type;
public:
	Animal();
	Animal( Animal const & copy );
	Animal &operator=(Animal const & copy);
	virtual ~Animal();
	virtual std::string getType() const;
	virtual void makeSound() const = 0; // Abstract (remove "= 0" to compile)
};

#endif