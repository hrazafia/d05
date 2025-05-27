/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 09:50:36 by hrazafia          #+#    #+#             */
/*   Updated: 2025/05/27 07:02:52 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& n, int g): name(n), grade(g)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other): name(other.name), grade(other.grade)
{

}

Bureaucrat::~Bureaucrat()
{

}

const std::string&	Bureaucrat::getName() const throw()
{
	return (this->name);
}

int	Bureaucrat::getGrade() const throw()
{
	return (this->grade);
}

void	Bureaucrat::incrementGrade() throw(GradeTooHighException)
{
	grade--;
	if (grade < 1)
		throw GradeTooHighException();
}

void	Bureaucrat::decrementGrade() throw(GradeTooLowException)
{
	grade++;
	if (grade > 150)
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
