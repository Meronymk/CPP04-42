/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 05:03:43 by krochefo          #+#    #+#             */
/*   Updated: 2023/04/12 05:10:37 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_HPP__
#define __WRONGANIMAL_HPP__

#include <string>
#include <iostream>

class WrongAnimal{
protected:
	std::string _type;
public:
	WrongAnimal();
	WrongAnimal( WrongAnimal const & copy );
	WrongAnimal &operator=(WrongAnimal const & copy);
	virtual ~WrongAnimal();
	virtual std::string getType() const;
	virtual void makeSound() const;
};

#endif