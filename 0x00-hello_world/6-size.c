#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	char d;
	float e;

	printf("Size of an int: %d byte(s)\n", (int) sizeof(a));
	printf("Size of a long int: %li byte(s)\n", (int long) sizeof(b));
	printf("Size of an char: %c byte(s)\n", (char) sizeof(d));
	printf("Size of an float: %f byte(s)\n", (float) sizeof(e));
	return (0);
}
