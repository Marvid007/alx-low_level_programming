#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - priints a name.
 * @name: pointer to name.
 * @f: function pointer
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
