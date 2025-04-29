/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 08:43:29 by hrazafia          #+#    #+#             */
/*   Updated: 2025/04/27 08:43:30 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

# include <iostream>

class B
{
	private:
		int	_value;

	public:
			B(const int& value);
			B(void);
			B(const B& other);
			virtual ~B(void);
		B&	operator=(const B& other);
};

#endif
