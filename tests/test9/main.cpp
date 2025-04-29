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
#include "Integer.hpp"

int	main(void)
{
	for (int i = 0; i < 10; i++)
	{
		try
		{
			Integer	integer1(i);
			Integer	integer2(integer1);
			std::cout << integer1.getValue() << std::endl;
		}
		catch (...)
		{
			std::cout << "Exception is thrown" << std::endl;
		}
	}
	return 0;
}
