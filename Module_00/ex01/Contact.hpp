#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <stdint.h>
#include <stddef.h>

class Contact
{
private:
	char	first_name[32];
	char	last_name[32];
	char	nickname[32];
	char	phone[32];
	char	secret[32];

public:
	Contact();
	void	print_short(size_t index);
	void	print_long(void);
	void	add_contact(void);
};

#endif