#include <iostream>
#include "PhoneBook.hpp"

void	prompt_menu(void)
{
	std::cout << "*****MENU*****" << std::endl;
	std::cout << "1)ADD" << std::endl;
	std::cout << "2)SEARCH" << std::endl;
	std::cout << "3)EXIT" << std::endl;
	std::cout << "**************" << std::endl;
}

int	main(void)
{
	PhoneBook 	pb;
	std::string	c;
	int			i;

	std::cout << "Please choose one of the options in the menu." << std::endl;
	i = 0;
	while (1)
	{
		prompt_menu();
		if (i == 8)
			i = 0;
		std::cout << "Input: ";
		std::getline(std::cin, c);
		std::cin.clear();
		if (c == "ADD" || c == "1")
		{
			pb.add(pb.contact, i++);
			std::cout << "Contact " << i <<  " was added succefully!" << std::endl;
		}
		else if (c == "SEARCH" || c == "2")
		{
			pb.search(pb.contact);
		}
		else if (c == "EXIT" || c == "3")
		{
				std::cout << "Exiting..." << std::endl;
				return 0;
		}
		else
				std::cout << "Wrong option! Please choose a number between 1 and 3 or type the command." << std::endl << "Here is the menu as reference." << std::endl;
	}
	return 0;
}

