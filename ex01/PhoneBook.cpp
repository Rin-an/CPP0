#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::add(int i)
{
	Contact	c;
	std::string	str;

	c = this->contact[i];
	std::cin.clear();
	std::cout << "First Name*: ";
	std::getline(std::cin, str);
	c.set_fn(str);
	std::cout << "Last Name*: ";
	std::getline(std::cin, str);
	c.set_ln(str);
	std::cout << "Nickname*: ";
	std::getline(std::cin, str);
	c.set_nickname(str);
	std::cout << "Phone Number*: ";
	std::getline(std::cin, str);
	c.set_pn(str);
	std::cout << "Darkest Secret*: ";
	std::getline(std::cin, str);
	c.set_secret(str);
}

void	PhoneBook::search(void)
{
	int	i;
	int	index;
	Contact	*c;
	char	tab[4][11] = {"index", "first name", "last name", "nickname"};


	i = -1;
	index = -1;
	c = this->contact;
	while (++index < 4)
	{
		std::cout << std::right << std::setw(10) << tab[index];
		std::cout << "|";
	}
	std::cout << std::endl;
	while (++i < 8)
	{
		std::cout << std::right << std::setw(10) << c[i].get_fn();
		std::cout << "|";
	}
}
