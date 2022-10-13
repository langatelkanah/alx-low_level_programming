#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * print_name - prints a name
 *
 * @name: The pointer to the name
 * @f: The pointer to the function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
