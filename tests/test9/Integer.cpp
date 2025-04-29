/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 08:04:10 by hrazafia          #+#    #+#             */
/*   Updated: 2025/04/27 08:04:11 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.hpp"

Integer::Integer(int value)
try: _sp(new int)
{
	*_sp = value;
}
catch (...)
{
	throw ;
}

Integer::Integer(void): _sp(0)
{

}

Integer::Integer(const Integer& other): _sp(other._sp)
{

}

Integer&	Integer::operator=(const Integer& other)
{
	if (this == &other)
	{
		_sp = other._sp;
	}
	return (*this);
}

Integer::~Integer(void)
{

}

int	Integer::getValue(void) const
{
	return (*_sp);
}
