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
	
	std::cout << "Last Name*: ";
	std::cin >> this->contact[i].last_name;
	std::cout << "Nickname*: ";
	std::cin >> this->contact[i].nickname;	
	std::cout << "Phone Number*: ";
	std::cin >> this->contact[i].phone_num;
	std::cout << "Darkest Secret*: ";
	std::cin >> this->contact[i].secret;
}

void	PhoneBook::search(std::string *str)
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
