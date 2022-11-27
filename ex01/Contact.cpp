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

void	Contact::set_fn(std::string str)	
{
	this->first_name = str;
}

void    Contact::set_ln(std::string str)
{
	this->last_name = str;
}

void    Contact::set_nickname(std::string str)
{
	this->nickname = str;
}

void    Contact::set_pn(std::string str)
{
	this->phone_num = str;
}

void    Contact::set_secret(std::string str)
{
	this->secret = str;
}

