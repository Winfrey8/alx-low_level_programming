#include <main.h>

/**
 * main - prints alphabets
 *
 * Description: this program prints alphabets
 * in lower case
 *
 * Return: 0
 */
void print_alphabet(void);
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n')
}
