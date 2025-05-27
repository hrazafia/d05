/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <hrazafia@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 06:18:59 by hrazafia          #+#    #+#             */
/*   Updated: 2025/05/27 11:32:31 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string& formName, const int formSignGrade, const int formExecGrade):
	name(formName), isSigned(false), signGrade(formSignGrade), execGrade(formExecGrade)
{
	if ((signGrade < 1) || (execGrade < 1))
		throw Form::GradeTooHighException();
	if ((signGrade > 150) || (execGrade > 150))
		throw Form::GradeTooLowException();
}

Form::Form(const Form& other): name(other.name), isSigned(other.isSigned),
	signGrade(other.signGrade), execGrade(other.execGrade)
{

}

Form::~Form()
{

}
