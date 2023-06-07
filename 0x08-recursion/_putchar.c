#include "main.h"
#include <unistd.h>
/**
 * comment
 * mmmdjdj
 */

int _putchar(char c)
{
	return (writev(1, &c, 1));
}
