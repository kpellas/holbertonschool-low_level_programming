#include <stdio.h>
/**
* main - Prints lowercase letters
*	in reverse followed by new line.
*
*
* Return: 0 on success
*/
nt main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
