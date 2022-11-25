#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

void	Contact::add(void)
{
	char	*s;

	std::cout << "First Name*: ";
	std::cin >> s;
	std::cout << "Last Name*: ";
	std::cin >> s;
	std::cout << "Nickname*: ";
	std::cin >> s;	
	std::cout << "Phone Number*: ";
	std::cin >> s;
	std::cout << "Darkest Secret*: ";
	std::cin >> s;
}
