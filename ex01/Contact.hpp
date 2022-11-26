#ifndef CONTACT_H
#define CONTACT_H
# include <iostream>
# include <iomanip>
# include <string>

class	Contact{
	std::string	first_name[50];
	std::string	last_name[50];
	std::string	nickname[20];
	std::string	phone_num[10];
	std::string	secret[100];
	public :
		Contact(void);
		~Contact(void);
		void	set_fn(void);
		void	set_ln(void);
		void	set_nickname(void);
		void	set_pn(void);
		void	set_secret(void);
		char	*get_fn(void) const;
		char	*get_ln(void) const;
		char	*get_nickname(void) const;
		char	*get_pn(void) const;
		char	*get_secret(void) const;
};
#endif
