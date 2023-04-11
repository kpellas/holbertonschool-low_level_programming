#include <stdio.h>

/**
 * main - Prints alphabet in lower case
 * 	then follow with upper case
 * Return: Always 0/
*/
int main(void)
{
	char c, C;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);


	for (C = 'A'; C <= 'Z'; C++)
		putchar(C);
	putchar('\n');
	return (0);
}
