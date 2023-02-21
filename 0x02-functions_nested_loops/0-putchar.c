#include <main.h>
/**
 * main - prints Holberton as a message
 * Return: Always 0 (Success)
 */
int main(void)
{
	ins str[]={95, 112, 117, 116, 99, 104, 97, 115};
	int count, sz;
	sz=sizeof(st)/sizeof(int);
	for(count=0; count<sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar(/n);
	return(0);
}
