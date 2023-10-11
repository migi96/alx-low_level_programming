#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: string add
 * @f: pointer
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
