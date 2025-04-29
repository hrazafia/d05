/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 08:43:27 by hrazafia          #+#    #+#             */
/*   Updated: 2025/04/27 08:43:28 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A(const B& b): _b(b)
{
	std::cout << "A parameters constructor called" << std::endl;
}

A::A(void): _b(0)
{
	std::cout << "A default constructor called" << std::endl;
}

A::A(const A& other): _b(other._b)
{
	std::cout << "A copy constructor called" << std::endl;
}

A::~A(void)
{
	std::cout << "A destructor called" << std::endl;
}

A&	A::operator=(const A& other)
{
	std::cout << "A Assignation operator called" << std::endl;
	if (this != &other)
	{
		_b = other._b;
	}
	return (*this);
}
