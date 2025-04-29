/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 08:12:37 by hrazafia          #+#    #+#             */
/*   Updated: 2025/04/28 08:12:38 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class MyCustomException: public std::exception
{
	private:
		std::string	_message;

	public:
					MyCustomException(const char* message);
					virtual ~MyCustomException(void) throw();
		const char*	what(void) const throw();
};

MyCustomException::MyCustomException(const char* message): _message(message)
{

}

MyCustomException::~MyCustomException(void) throw()
{

}

const char*	MyCustomException::what() const throw()
{
	return (_message.c_str());
}

int	main(void)
{
	try
	{
		throw MyCustomException("Custom exception message");
	}
	catch (const MyCustomException& ex)
	{
		std::cout << "Caught custom exception: " << ex.what() << std::endl;
	}
	return (0);
}
