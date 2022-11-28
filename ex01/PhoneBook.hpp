#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H
#include "Contact.hpp"
#include "utils.hpp"

class PhoneBook{
	public :
		PhoneBook(void);
		~PhoneBook(void);
		void	search(Contact *c);
		void	add(Contact *c, int i);
		Contact	contact[8];
};
#endif
