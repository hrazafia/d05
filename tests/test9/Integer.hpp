/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 08:04:08 by hrazafia          #+#    #+#             */
/*   Updated: 2025/04/27 08:04:09 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_HPP
# define INTEGER_HPP

# include "SmartPtr.hpp"

class Integer
{
	private:
		SmartPtr	_sp;

	public:
					Integer(int value);
					Integer(void);
					Integer(const Integer& other);
					virtual ~Integer(void);
		Integer&	operator=(const Integer& other);
		int			getValue(void) const;
};

#endif
