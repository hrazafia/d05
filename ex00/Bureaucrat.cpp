/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 09:50:36 by hrazafia          #+#    #+#             */
/*   Updated: 2025/04/29 09:50:37 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& name, int grade): _name(name), _grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other): _name(other._name), _grade(other._grade)
{

}

Bureaucrat::Bureaucrat()
{

}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& other)
{
	(void) other;
	return (*this);
}

const std::string&	Bureaucrat::getName() const throw()
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const throw()
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade() throw(GradeTooHighException)
{
	_grade--;
	if (_grade < 1)
		throw GradeTooHighException();
}

void	Bureaucrat::decrementGrade() throw(GradeTooLowException)
{
	_grade++;
	if (_grade > 150)
		throw GradeTooLowException();
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat grade is too high!");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat grade is too low!");
}

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return (out);
}
