#include <stdio.h>

/**
* main - Prints alphabet in lower case
*	exclude q and e
* Return: Always 0/
*/
int main(void)
{
	char c, C;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
