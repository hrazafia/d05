/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 06:19:03 by hrazafia          #+#    #+#             */
/*   Updated: 2025/05/27 11:24:51 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_signGrade;
		const int			_execGrade;

							AForm();
		AForm&				operator=(const AForm& other);

	public:
		static const int	maxGrade = 1;
		static const int	minGrade = 150;

							AForm(const std::string& name, const int signGrade, const int execGrade);
							AForm(const AForm& other);
							virtual ~AForm();

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

		void				beSigned(const Bureaucrat& bureaucrat) throw(AForm::GradeTooLowException);

		virtual void		execute(Bureaucrat const & executor) const = 0;
};

std::ostream&	operator<<(std::ostream& out, const AForm& form);

#endif
