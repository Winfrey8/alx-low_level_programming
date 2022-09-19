#include <stdio.h>

/**
 * main - print alphabets in lower case
 *
 * Description: using the main function
 * this program prints alphabets in lower case
 * we use putchar function
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar("\n");
	return (0);
}

