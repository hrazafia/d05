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

Form::Form(const std::string& name, const int signGrade, const int execGrade):
	_name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if ((_signGrade < Form::maxGrade) || (_execGrade < Form::maxGrade))
	{
		throw Form::GradeTooHighException();
	}
	if ((_signGrade > Form::minGrade) || (_execGrade > Form::minGrade))
	{
		throw Form::GradeTooLowException();
	}
}

Form::Form(const Form& other): _name(other._name), _isSigned(other._isSigned),
	_signGrade(other._signGrade), _execGrade(other._execGrade)
{

}

Form::~Form()
{

}

const std::string&	Form::getName() const throw()
{
	return (_name);
}

bool	Form::getIsSigned() const throw()
{
	return (_isSigned);
}

int	Form::getSignGrade() const throw()
{
	return (_signGrade);
}

int	Form::getExecGrade() const throw()
{
	return (_execGrade);
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("grade is too hight");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("grade is too low");
}

void	Form::beSigned(const Bureaucrat& bureaucrat) throw(Form::GradeTooLowException)
{
	if (bureaucrat.getGrade() > _signGrade)
	{
		throw Form::GradeTooLowException();
	}
	_isSigned = true;
}

std::ostream&	operator<<(std::ostream& out, const Form& form)
{
	out << form.getName() << ", sign grade required " << form.getSignGrade()
		<< ", execute grade required " << form.getExecGrade()
		<< ", is " << (form.getIsSigned() ? "signed." : "not signed.");
	return (out);
}
