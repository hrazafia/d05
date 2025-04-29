/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 08:43:29 by hrazafia          #+#    #+#             */
/*   Updated: 2025/04/27 08:43:30 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include <iostream>
# include "B.hpp"

class A
{
	private:
		B	_b;

	public:
			A(const B& b);
			A(void);
			A(const A& other);
			virtual ~A(void);
		A&	operator=(const A& other);
};

#endif
