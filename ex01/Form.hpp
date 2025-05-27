/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 06:19:03 by hrazafia          #+#    #+#             */
/*   Updated: 2025/05/27 07:03:24 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <stdexcept>

# include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	name;
		bool				isSigned;
		const int			signGrade;
		const int			execGrade;

							Form();
		Form&				operator=(const Form& other);

	public:
							Form(const std::string& name, const int signGrade, const int execGrade);
							Form(const Form& other);
							~Form();

		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};

		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};

		const std::string&	getName() const throw();
		bool				getIsSigned() const throw();
		const int			getSignGrade() const throw();
		const int			getExecGrade() const throw();

		void				beSigned(const Bureaucrat& bureaucrat) throw(GradeTooLowException);
};

std::ostream&	operator<<(std::ostream& out, const Form& form);

#endif
