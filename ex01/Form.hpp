/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 06:19:03 by hrazafia          #+#    #+#             */
/*   Updated: 2025/05/27 11:24:51 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat;

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
		int					getSignGrade() const throw();
		int					getExecGrade() const throw();

		void				beSigned(Bureaucrat bureaucrat) throw(Form::GradeTooLowException);
};

std::ostream&	operator<<(std::ostream& out, const Form& form);

#endif
