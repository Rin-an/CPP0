#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::add(int i)
{
	char	*s;
	Contact	c;

	c = this->contact[i];
	std::cout << "First Name*: ";
	c.set_fn();
	std::cout << "Last Name*: ";
	c.set_ln();
	std::cout << "Nickname*: ";
	c.set_nickname();
	std::cout << "Phone Number*: ";
	c.set_pn();
	std::cout << "Darkest Secret*: ";
	c.set_secret();
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
