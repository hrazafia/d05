/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 09:10:39 by hrazafia          #+#    #+#             */
/*   Updated: 2025/04/18 09:22:48 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>

class Bureaucrat
{
	private:
		const std::string	_name;

	public:
							Bureaucrat(const std::string& name);
							Bureaucrat(void);
							Bureaucrat(const Bureaucrat& other);
							virtual ~Bureaucrat(void);
		Bureaucrat&			operator=(const Bureaucrat& other);

		const std::string&	getName(void) const;
};

#endif
