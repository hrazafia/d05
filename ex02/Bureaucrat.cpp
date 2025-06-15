/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 09:50:36 by hrazafia          #+#    #+#             */
/*   Updated: 2025/05/27 11:34:01 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(const std::string& name, int grade): _name(name), _grade(grade)
{
	if (_grade < Bureaucrat::maxGrade)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	if (_grade > Bureaucrat::minGrade)
	{
		throw Bureaucrat::GradeTooLowException();
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& other): _name(other._name), _grade(other._grade)
{

}

Bureaucrat::~Bureaucrat()
{

}

const std::string&	Bureaucrat::getName() const throw()
{
	return (_name);
}

int	Bureaucrat::getGrade() const throw()
{
	return (_grade);
}

void	Bureaucrat::incrementGrade() throw(Bureaucrat::GradeTooHighException)
{
	if (_grade == Bureaucrat::maxGrade)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	_grade--;
}

void	Bureaucrat::decrementGrade() throw(Bureaucrat::GradeTooLowException)
{
	if (_grade == Bureaucrat::minGrade)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	_grade++;
}

void	Bureaucrat::signForm(Form& form) const throw()
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << _name << " couldn't sign " << form.getName() << " because " << e.what()
		<< "." << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form) const
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << _name << " couldn't executed " << form.getName() << " because " << e.what()
		<< "." << std::endl;
	}
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat grade is too high");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat grade is too low");
}

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return (out);
}
