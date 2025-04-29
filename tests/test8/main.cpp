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

void	first(void) throw ();
void	second(void) throw (int);

int	main(void)
{
	first();
	return 0;
}

void	first(void) throw ()
{
	try
	{
		second();
	}
	catch (int e)
	{
		std::cout << e << std::endl;
	}
}

void	second(void) throw (int)
{
	throw (16);
}
