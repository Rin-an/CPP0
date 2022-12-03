#include "PhoneBook.hpp"
#include <sstream>

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

int	search_print(Contact *c)
{
	int					i;
	std::stringstream	istream;
	std::string			s;

	std::cout << "So... who do you want to check now? Please enter the related index" << std::endl;
	std::cout << "Index: ";
	std::getline(std::cin, s);
	istream << s;
	istream >> i;
	std::cin.clear();
	if (istream && i <= 8 && i >= 1)
	{
		std::cout <<"First Name: " ;
		std::cout << c[i - 1].get_fn() << std::endl;
		std::cout << "Last Name: ";
		std::cout << c[i - 1].get_ln() << std::endl;
		std::cout << "Nickname: ";
		std::cout << c[i - 1].get_nickname() << std::endl;
		std::cout << "Phone Number: ";
		std::cout << c[i - 1].get_pn() << std::endl;
		std::cout << "Darkest Secret: ";
		std::cout << c[i - 1].get_secret() << std::endl;;
		return (1);
	}
	return (0);
}

void	add_fn(Contact *c)
{
	std::string str;

	while (!str.size())
	{
		std::cout << "First Name*: ";
		std::getline(std::cin, str);
	}
	c->set_fn(str);
}

void	add_ln(Contact *c)
{
	std::string str;

	while (!str.size())
	{
		std::cout << "Last Name*: ";
		std::getline(std::cin, str);
	}
	c->set_ln(str);
}

void	add_nn(Contact *c)
{
	std::string str;

	while (!str.size())
	{
		std::cout << "Nickname*: ";
		std::getline(std::cin, str);
	}
	c->set_nickname(str);
}

void	add_pn(Contact *c)
{
	std::string str;

	while (!str.size())
	{
		std::cout << "Phone Number*: ";
		std::getline(std::cin, str);
	}
	c->set_pn(str);
}

void	add_secret(Contact *c)
{
	std::string str;

	while (!str.size())
	{
		std::cout << "Darkest Secret*: ";
		std::getline(std::cin, str);
	}
	c->set_secret(str);
}
