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
	add_fn(&c[i]);
	add_ln(&c[i]);
	add_nn(&c[i]);
	add_pn(&c[i]);
	add_secret(&c[i]);
}

void	PhoneBook::search(Contact *c)
{
	int	i;
	std::string	str;
	char	tab[4][11] = {"index", "first name", "last name", "nickname"};

	std::cout << "*************SEARCH*************" << std::endl;
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
	while (!search_print(c))
		std::cout << "Wrong index please enter a valid one. PS: you'll be stuck in this loop until you enter a valid index lol." << std::endl;
}
