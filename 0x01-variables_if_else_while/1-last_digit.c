#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assign random number to variable n
 *
 * Description: use printf to determine if the number
 * is the last digit of
 *
 * betty style doc for function main betty-style.pl
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
	printf("The last digit of %d and is greater than 5\n");
	}
	if ((n % 10) == 0)
	{
	printf("The last digit of %d and is 0\n");
	}
	if ((n % 10) > 0)
	{
	printf("The last digit of %d and is less than 6 and not 0\n");
	}
	return (0);
}
