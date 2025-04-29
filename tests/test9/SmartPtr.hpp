/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SmartPtr.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 08:04:01 by hrazafia          #+#    #+#             */
/*   Updated: 2025/04/27 08:04:02 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SMARTPTR_HPP
# define SMARTPTR_HPP

class SmartPtr
{
	private:
		int			*_ptr;

	public:
					SmartPtr(int *ptr);
					SmartPtr(void);
					SmartPtr(const SmartPtr& other);
					virtual ~SmartPtr(void);
		SmartPtr&	operator=(const SmartPtr& other);
		int&		operator*(void) const;
		int*		operator->(void) const;
};

#endif
