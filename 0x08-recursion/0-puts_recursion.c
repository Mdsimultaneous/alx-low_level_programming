#include "main.h"
/**
 * 0x08-recursion
 * command
 * reccursion
 */
void _puts_recursion(char *s)
{
	if(*s)
	{
_putchar_recursion(*s);
_puts_recursion(s + 1);
}
else
_putchar_recursion('\n');
}
