/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 05:02:43 by krochefo          #+#    #+#             */
/*   Updated: 2023/04/12 05:16:19 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_HPP__
#define __WRONGCAT_HPP__

#include "WrongAnimal.hpp"
#include <string>
#include <iostream>

class WrongCat : public WrongAnimal{
private:
	std::string type;
public:
		WrongCat();
		virtual ~WrongCat();
		WrongCat(WrongCat & ref);
		WrongCat & operator=(WrongCat const & copy);
		std::string getType( void ) const;
};

#endif