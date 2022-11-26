#include <iostream>
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook 	pb;
	int			c;
	int			i;
	Contact		c;

	std::cout << "*****MENU*****" << std::endl;
	std::cout << "1)ADD" << std::endl;
	std::cout << "2)SEARCH" << std::endl;
	std::cout << "3)EXIT" << std::endl;
	i = 0;
	while (1)
	{
		if (i == 8)
			i = 0;
		std::cin >> c;
		c = pn.get_contact()[i++];
		switch (c)
		{
			case (1):
				std::cout << "In add option" << std::endl;
				c.add();
				break;
			case (2):
				std::cout << "In search option" << std::endl;
				pb.search();
				break;
			case (3) :
				std::cout << "Exiting..." << std::endl;
				return 0;
			default:
				c = 0;
				std::cout << "Wrong option! Please choose a number between 1 and 3 for the desired action." << std::endl;
				break;
		}
	}
	return 0;
}

