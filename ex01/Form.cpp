/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 06:18:59 by hrazafia          #+#    #+#             */
/*   Updated: 2025/05/27 12:02:48 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form(const std::string& formName, const int formSignGrade, const int formExecGrade):
	name(formName), isSigned(false), signGrade(formSignGrade), execGrade(formExecGrade)
{
	if ((signGrade < 1) || (execGrade < 1))
	{
		throw Form::GradeTooHighException();
	}
	if ((signGrade > 150) || (execGrade > 150))
	{
		throw Form::GradeTooLowException();
	}
}

Form::Form(const Form& other): name(other.name), isSigned(other.isSigned),
	signGrade(other.signGrade), execGrade(other.execGrade)
{

}

Form::~Form()
{

}

const std::string&	Form::getName() const throw()
{
	return (this->name);
}

bool	Form::getIsSigned() const throw()
{
	return (this->isSigned);
}

int	Form::getSignGrade() const throw()
{
	return (this->signGrade);
}

int	Form::getExecGrade() const throw()
{
	return (this->execGrade);
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("grade is too hight");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("grade is too low");
}

void	Form::beSigned(Bureaucrat bureaucrat) throw(Form::GradeTooLowException)
{
	if (bureaucrat.getGrade() > signGrade)
	{
		throw Form::GradeTooLowException();
	}
	else
	{
		isSigned = true;
	}
}

std::ostream&	operator<<(std::ostream& out, const Form& form)
{
	out << form.getName() << ", sign grade required " << form.getSignGrade()
		<< ", execute grade required " << form.getExecGrade()
		<< ", is " << (form.getIsSigned() ? "signed." : "not signed.");
	return (out);
}
