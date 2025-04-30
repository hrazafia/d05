/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 09:41:20 by hrazafia          #+#    #+#             */
/*   Updated: 2025/04/29 09:41:21 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

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
		Bureaucrat	foo("Foo", 3);

		std::cout << foo << std::endl;
		std::cout << std::endl;

		std::cout << foo.getName() << " are promute!" << std::endl;
		foo.incrementGrade();
		std::cout << foo << std::endl;
		std::cout << std::endl;

		std::cout << foo.getName() << " are promute!" << std::endl;
		foo.incrementGrade();
		std::cout << foo << std::endl;
		std::cout << std::endl;

		std::cout << foo.getName() << " are promute!" << std::endl;
		foo.incrementGrade();
		std::cout << foo << std::endl;
		std::cout << std::endl;
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
		Bureaucrat	bar("Bar", 148);

		std::cout << bar << std::endl;
		std::cout << std::endl;

		std::cout << bar.getName() << " are demote!" << std::endl;
		bar.decrementGrade();
		std::cout << bar << std::endl;
		std::cout << std::endl;

		std::cout << bar.getName() << " are demote!" << std::endl;
		bar.decrementGrade();
		std::cout << bar << std::endl;
		std::cout << std::endl;

		std::cout << bar.getName() << " are demote!" << std::endl;
		bar.decrementGrade();
		std::cout << bar << std::endl;
		std::cout << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
