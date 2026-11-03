#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <iostream>
#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	phonebook;

	while (true)
	{
		std::cout << "Insert the command\n";
		if (phonebook.read())
			break ;
	}
	return (0);
}
