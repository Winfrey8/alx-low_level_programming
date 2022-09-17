#include <stdlib.h>
#include <time.h>

/**
 * main - assign random number to variable n
 *
 * Description: use printf to determine if the number
 * is positive or negative
 *
 * betty style doc for function main is betty-style.pl
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	printf("%d is positive", n);
	}
	if (n == 0)
	{
	printf("%d is zero", n);
	}
	else
	{
		printf("%d is negative", n);
	}
	return (0);
}
