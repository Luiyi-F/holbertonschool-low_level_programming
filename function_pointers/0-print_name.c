#include "function_pointers.h"
#include <stdio.h>

/**
 *print_name - function pinter
 *@name: name other fucntion
 *@f: function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
