#include "PhoneBook.hpp"

void	ft_resize_print(std::string str)
{
	if (str.size() >= 10)
	{
		str.resize(10);
		str[9] = '.';
	}
	std::cout << std::right << std::setw(10) << str;
	std::cout << "|";
}

void	search_print(Contact *c)
{
	int	i;

	i = 0;
	std::cout << "So... who do you want to check now? Please enter the related index" << std::endl;
	while (i < 1 || i > 8)
	{
		std::cin >> i;
		std::cin.ignore();
		if (i > 8 || i < 1)
			std::cout << "Wrong index please enter a valid one. P.S: you gonna be stuck in this loop until you enter a valid index lol." << std::endl;
		else
		{
			std::cout << std::right << std::setw(10) <<c[i - 1].get_fn();
			std::cout << "|";
			std::cout << std::right << std::setw(10) <<c[i - 1].get_ln();
			std::cout << "|";
			std::cout << std::right << std::setw(10) <<c[i - 1].get_nickname();
			std::cout << "|";
			std::cout << std::right << std::setw(10) <<c[i - 1].get_pn();
			std::cout << "|";
			std::cout << std::right << std::setw(10) <<c[i - 1].get_secret();
			std::cout << "|" << std::endl;
		}
	}
}

void	add_fn(Contact c)
{
	std::string str;

	while (!str.size())
	{
		std::cout << "First Name*: ";
		std::getline(std::cin, str);
	}
	c.set_fn(str);
}

void	add_ln(Contact c)
{
	std::string str;

	while (!str.size())
	{
		std::cout << "Lasr Name*: ";
		std::getline(std::cin, str);
	}
	c.set_ln(str);
}

void	add_nn(Contact c)
{
	std::string str;

	while (!str.size())
	{
		std::cout << "Nickname*: ";
		std::getline(std::cin, str);
	}
	c.set_nickname(str);
}

void	add_pn(Contact c)
{
	std::string str;

	while (!str.size())
	{
		std::cout << "Phone Number*: ";
		std::getline(std::cin, str);
	}
		c.set_pn(str);
}

void	add_secret(Contact c)
{
	std::string str;

	while (!str.size())
	{
		std::cout << "Darkest Secret*: ";
		std::getline(std::cin, str);
	}
		c.set_secret(str);
}
