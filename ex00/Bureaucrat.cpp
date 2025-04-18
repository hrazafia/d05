/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 09:10:46 by hrazafia          #+#    #+#             */
/*   Updated: 2025/04/18 09:26:06 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& name): _name(name)
{

}

Bureaucrat::Bureaucrat(void): _name("Unknown")
{

}

Bureaucrat::Bureaucrat(const Bureaucrat& other): _name(other._name)
{

}

Bureaucrat::~Bureaucrat(void)
{

}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
	{

	}
	return (*this);
}

const std::string&	Bureaucrat::getName(void) const
{
	return (this->_name);
}
