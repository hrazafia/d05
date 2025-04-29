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
	int	result;

	for (int i = 0; i < 5; i++)
	{
		std::cout << "Enter an integer: ";
		std::cin >> num1;
		std::cout << "Enter another integer: ";
		std::cin >> num2;
		result = quotient(num1, num2);
		if (result == -1)
		{
			std::cout << "Error, division by zero." << std::endl;
		}
		else
		{
			std::cout << "The result of division is: " << result << std::endl;
		}
	}
	return 0;
}

int	quotient(int first, int second)
{
	if (second == 0)
	{
		return (-1);
	}
	return (first / second);
}
