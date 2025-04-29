/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SmartPtr.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 08:04:04 by hrazafia          #+#    #+#             */
/*   Updated: 2025/04/27 08:04:05 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SmartPtr.hpp"

SmartPtr::SmartPtr(int *ptr): _ptr(ptr)
{

}

SmartPtr::SmartPtr(void): _ptr(0)
{

}

SmartPtr::SmartPtr(const SmartPtr& other)
{
	if (other._ptr)
		_ptr = new int(*other._ptr);
	else
		_ptr = 0;
}

SmartPtr&	SmartPtr::operator=(const SmartPtr& other)
{
	if (this != &other)
	{
		delete _ptr;

		if (other._ptr)
			_ptr = new int(*other._ptr);
		else
			_ptr = 0;
	}
	return (*this);
}

SmartPtr::~SmartPtr(void)
{
	delete _ptr;
}

int&	SmartPtr::operator*(void) const
{
	return (*_ptr);
}

int*	SmartPtr::operator->(void) const
{
	return (_ptr);
}
