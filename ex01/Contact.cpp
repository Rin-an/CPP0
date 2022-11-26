#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

char	Contact::*get_fn(void)
{
	return (this->first_name);
}	

char    Contact::*get_ln(void)
{
	return this->last_name;
}

char    Contact::*get_nickname(void)
{
	return this->nickname;
}

char    Contact::*get_pn(void)
{
	return this->phone_num;
}

char    *get_secret(void)
{
	return this->secret;
}
