#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <string>

# include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
	private:
		std::string				_target;

								ShrubberyCreationForm();
								ShrubberyCreationForm (const ShrubberyCreationForm& other);
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& other);

	public:
								ShrubberyCreationForm(const std::string& target);
								virtual ~ShrubberyCreationForm();

		virtual void			toExecute() const;
}

#endif
