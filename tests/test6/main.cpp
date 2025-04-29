/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 10:23:05 by hrazafia          #+#    #+#             */
/*   Updated: 2025/03/26 17:57:27 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	quotient(int first, int second);

int	main(void)
{
	int	num1;
	int	num2;

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Enter an integer: ";
		std::cin >> num1;
		std::cout << "Enter another integer: ";
		std::cin >> num2;
		try
		{
			std::cout << "Result: " << quotient(num1, num2) << std::endl;
		}
		catch (int x)
		{
			std::cout << "Division by zero cannot be performed." << std::endl;
		}
	}
	return 0;
}

int	quotient(int first, int second)
{
	if (second == 0)
	{
		throw (0);
	}
	return (first / second);
}
