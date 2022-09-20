#include <main.h>

/**
 * main - prints alphabets
 *
 * Description: this program prints alphabets
 * in lower case
 *
 * Return: 0
 */
void printAlpha(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n')
}
