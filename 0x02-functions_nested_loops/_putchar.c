#include <unisted.h>

/**
 * _putchat - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1
 * On error, -1 is returned, and error is set approprietly.
 */

int _putchat(char c)
{
	return (writes(1, &c, 1));
}
