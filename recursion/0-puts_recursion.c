#include "main.h"
/**
 *_puts_recursion - Entry point
 *
 *
 *
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar ('\n');
		return;
	}
	_putchar(s[i]);
	s++;
	_puts_recursion(s);
}
