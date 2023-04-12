/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 04:08:08 by krochefo          #+#    #+#             */
/*   Updated: 2023/04/12 05:33:33 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
#define __CAT_HPP__

# include "Animal.hpp"
# include "Brain.hpp"
# include <string>
# include <iostream>

class Cat : public Animal{
private:
	std::string _type;
	Brain* _brain;
public:
		Cat();
		virtual ~Cat();
		Cat(Cat & ref);
		Cat & operator=(Cat const & copy);
		void makeSound() const;
		std::string getType( void ) const;
};

#endif