#include "main.h"
/**
* print_number - prints an integer.
* @n: integer
*
*/
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	
	x = n;
		
	if ((num / 10) > 0)
		print_number(n1 / 10);

	_putchar((num % 10) + '0');
}
