/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 09:50:38 by hrazafia          #+#    #+#             */
/*   Updated: 2025/04/29 09:50:39 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;

	public:
							Bureaucrat(const std::string& name, int grade);
							Bureaucrat(const Bureaucrat& other);
							~Bureaucrat();

	private:
							Bureaucrat();
		Bureaucrat&			operator=(const Bureaucrat& other);

	public:
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

		void				incrementGrade() throw(GradeTooHighException);
		void				decrementGrade() throw(GradeTooLowException);

		const std::string&	getName() const throw();
		int					getGrade() const throw();
};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& bureaucrat);

#endif
