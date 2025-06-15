/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 06:18:59 by hrazafia          #+#    #+#             */
/*   Updated: 2025/05/27 12:02:48 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

AForm::AForm(const std::string& name, const int signGrade, const int execGrade):
	_name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if ((_signGrade < AForm::maxGrade) || (_execGrade < AForm::maxGrade))
	{
		throw AForm::GradeTooHighException();
	}
	if ((_signGrade > AForm::minGrade) || (_execGrade > AForm::minGrade))
	{
		throw AForm::GradeTooLowException();
	}
}

AForm::AForm(const AForm& other): _name(other._name), _isSigned(other._isSigned),
	_signGrade(other._signGrade), _execGrade(other._execGrade)
{

}

AForm::~AForm()
{

}

const std::string&	AForm::getName() const throw()
{
	return (_name);
}

bool	AForm::getIsSigned() const throw()
{
	return (_isSigned);
}

int	AForm::getSignGrade() const throw()
{
	return (_signGrade);
}

int	AForm::getExecGrade() const throw()
{
	return (_execGrade);
}

const char*	AForm::GradeTooHighException::what() const throw()
{
	return ("grade is too hight");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("grade is too low");
}

const char*	AForm::FormNotSignedException::what() const throw()
{
	return ("form is not signed");
}

void	AForm::beSigned(const Bureaucrat& bureaucrat) throw(AForm::GradeTooLowException)
{
	if (bureaucrat.getGrade() > _signGrade)
	{
		throw AForm::GradeTooLowException();
	}
	_isSigned = true;
}

void	AForm::execute(Bureaucrat const & executor) const
{
	formCheck();
	toExecute();
}

void	AForm::formCheck(const Bureaucrat& executor) const
{
	if (_isSigned == false)
	{
		throw AForm::FormNotSignedException();
	}
	if (_execGrade < executor.getGrade())
	{
		throw AForm::GradeTooLowException();
	}
}

std::ostream&	operator<<(std::ostream& out, const AForm& form)
{
	out << form.getName() << ", sign grade required " << form.getSignGrade()
		<< ", execute grade required " << form.getExecGrade()
		<< ", is " << (form.getIsSigned() ? "signed." : "not signed.");
	return (out);
}
