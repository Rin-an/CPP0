#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string	Contact::get_fn(void) const
{
	return (this->first_name);
}	

std::string    Contact::get_ln(void) const
{
	return this->last_name;
}

std::string    Contact::get_nickname(void) const
{
	return this->nickname;
}

std::string    Contact::get_pn(void) const
{
	return this->phone_num;
}

std::string    Contact::get_secret(void) const
{
	return this->secret;
}

void	Contact::set_fn(void)	
{
	std::getline(std::cin, this->first_name);
}

void    Contact::set_ln(void)
{
	std::getline(std::cin, this->last_name);
}

void    Contact::set_nickname(void)
{
	std::getline(std::cin, this->nickname);
}

void    Contact::set_pn(void)
{
	std::getline(std::cin, this->phone_num);
}

void    Contact::set_secret(void)
{
	std::getline(std::cin, this->secret);
}

