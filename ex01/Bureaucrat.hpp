/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 09:50:38 by hrazafia          #+#    #+#             */
/*   Updated: 2025/05/27 11:22:50 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Form;

class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;

							Bureaucrat();
		Bureaucrat&			operator=(const Bureaucrat& other);

	public:
							Bureaucrat(const Bureaucrat& other);
							Bureaucrat(const std::string& name, int grade);
							~Bureaucrat();

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

		void				incrementGrade() throw(Bureaucrat::GradeTooHighException);
		void				decrementGrade() throw(Bureaucrat::GradeTooLowException);

		const std::string&	getName() const throw();
		int					getGrade() const throw();

		void				signForm() throw();
};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& bureaucrat);

#endif
