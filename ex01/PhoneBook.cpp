#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::add(Contact *c, int i)
{
	std::string	str;

	std::cout << "************ADD************" << std::endl;
	std::cout << "First Name*: ";
	std::getline(std::cin, str);
	c[i].set_fn(str);
	std::cout << "Last Name*: ";
	std::getline(std::cin, str);
	c[i].set_ln(str);
	std::cout << "Nickname*: ";
	std::getline(std::cin, str);
	c[i].set_nickname(str);
	std::cout << "Phone Number*: ";
	std::getline(std::cin, str);
	c[i].set_pn(str);
	std::cout << "Darkest Secret*: ";
	std::getline(std::cin, str);
	c[i].set_secret(str);
}

void	PhoneBook::search(Contact *c)
{
	int	i;
	std::string	str;
	char	tab[4][11] = {"index", "first name", "last name", "nickname"};

	i = -1;
	while (++i < 4)
	{
		std::cout << std::right << std::setw(10) << tab[i];
		std::cout << "|";
	}
	std::cout << std::endl;
	i = -1;
	while (++i < 8)
	{
		std::cout << std::right << std::setw(10) << i + 1;
		std::cout << "|";
		ft_resize_print(c[i].get_fn());
		ft_resize_print(c[i].get_ln());
		ft_resize_print(c[i].get_nickname());
		std::cout << std::endl;
	}
	search_print(c);
}
