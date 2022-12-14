#include "main.h"

/**
 * print_sign - Check _putchar
 * @n: An input number
 * Description: Tohis function prints the sign of the number
 * Return: 1 if number is positive, o if number is 0, or
 * -1 if number is negative
 */
int print_sign(int n)
{
	int v;

	if (n > 1)
	{
		v = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		v = 0;
		_putchar('0');
	}
	else
	{
		v = -1;
		_putchar('-');
	}

	return (v);

}
