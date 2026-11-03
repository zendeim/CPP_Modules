#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <stdint.h>
#include <stddef.h>

#include "Contact.hpp"

class PhoneBook
{
private:
	size_t cur_index_;
	void add_();
	void search_();
	Contact	contacts[8];

public:
	PhoneBook(void);
	int read(void);
};

#endif