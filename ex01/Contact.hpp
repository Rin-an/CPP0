#ifndef CONTACT_H
#define CONTACT_H
# include <iostream>
# include <iomanip>
# include <string>

class	Contact{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_num;
	std::string	secret;
	public :
		Contact(void);
		~Contact(void);
		void	set_fn(void);
		void	set_ln(void);
		void	set_nickname(void);
		void	set_pn(void);
		void	set_secret(void);
		std::string	get_fn(void) const;
		std::string	get_ln(void) const;
		std::string	get_nickname(void) const;
		std::string	get_pn(void) const;
		std::string	get_secret(void) const;
};
#endif
