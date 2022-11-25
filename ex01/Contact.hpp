#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>

class	Contact{
	public :
		char	first_name[50];
		char	last_name[50];
		char	nickname[20];
		char	phone_num[10];
		char	secret[100];
		Contact(void);
		~Contact(void);
	/*	void	set_fn(void);
		void	set_ln(void);
		void	set_nickname(void);
		void	set_pn(void);
		void	set_secret(void);
		void	get_fn(void);
		void	get_ln(void);
		void	get_nickname(void);
		void	get_pn(void);
		void	get_secret(void);*/
		void	add(void);
};
#endif
