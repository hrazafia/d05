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

int	main(void)
{
	int	num1;
	int	num2;
	int	result;

	for (int i = 0; i < 5; i++)
	{
		std::cout << "Enter an integer: ";
		std::cin >> num1;
		if (std::cin.eof() == true)
		{
			std::cout << "exit" << std::endl;
			return (0);
		}
		std::cout << "Enter another integer: ";
		std::cin >> num2;
		if (std::cin.eof() == true)
		{
			std::cout << "exit" << std::endl;
			return (0);
		}
		if (num2 == 0)
		{
			std::cout << "Division cannot be done in this case." << std::endl;
		}
		else
		{
			result = num1 / num2;
			std::cout << "The result of division is: " << result << std::endl;
		}
	}
	return 0;
}
