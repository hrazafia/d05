/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 08:43:27 by hrazafia          #+#    #+#             */
/*   Updated: 2025/04/27 08:43:28 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B(const int& value): _value(value)
{
	std::cout << "B parameters constructor called" << std::endl;
}

B::B(void): _value(0)
{
	std::cout << "B default constructor called" << std::endl;
}

B::B(const B& other): _value(other._value)
{
	std::cout << "B copy constructor called" << std::endl;
}

B::~B(void)
{
	std::cout << "B destructor called" << std::endl;
}

B&	B::operator=(const B& other)
{
	std::cout << "B Assignation operator called" << std::endl;
	if (this != &other)
	{
		_value = other._value;
	}
	return (*this);
}
