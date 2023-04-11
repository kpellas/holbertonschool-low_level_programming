#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Prints the last digit of a random number
 *	if displays whether it's > 5, < 5, = 0
 *
 * Return: Always 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last_digit;

	last_digit = n % 10;

	if last_digit > 5
		printf("%d is greater than 5", n);
	else if last_digit = 0
		printf("%d is 0", n);
	else
		printf("%d is less than 6 and not 0", n);

	return (0);
}
