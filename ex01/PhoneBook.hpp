#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H
#include "Contact.hpp"

class PhoneBook{
	private:
		Contact	contact[8];
	public :
		PhoneBook(void);
		~PhoneBook(void);
		void	search(void);
};
#endif
