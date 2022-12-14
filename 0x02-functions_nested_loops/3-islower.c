#include "main.h"

/**
 * _islower - Check _putchar
 * @c: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
	char i;
	int low;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			low = 1;
	}
	return (low);
}
