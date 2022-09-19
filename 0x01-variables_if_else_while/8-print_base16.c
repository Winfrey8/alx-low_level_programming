#include <stdio.h>

/**
 * main - print all single digits of base sixteen
 *
 * Description: using the main function
 * this program prints all single digits
 * of base sixteen
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar("\n");
	return (0);
}
