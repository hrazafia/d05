/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 09:41:20 by hrazafia          #+#    #+#             */
/*   Updated: 2025/05/27 07:03:28 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "Form.hpp"

void	test1();
void	test2();

int	main(void)
{
	test1();
	std::cout << std::endl;
	test2();
	return (0);
}

void	test1()
{
	std::cout << "====================Test 1====================" << std::endl;

	try
	{
		Bureaucrat	foo("Foo", 1);
		Form		form("The form", 3, 2);

		std::cout << foo << std::endl;
		std::cout << std::endl;

		std::cout << form << std::endl;
		std::cout << std::endl;

		foo.signForm(form);

		std::cout << std::endl;
		std::cout << form << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	test2()
{
	std::cout << "====================Test 2====================" << std::endl;

	try
	{
		Bureaucrat	foo("Bar", 3);
		Form		form("The form", 2, 2);

		std::cout << foo << std::endl;
		std::cout << std::endl;

		std::cout << form << std::endl;
		std::cout << std::endl;

		foo.signForm(form);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
