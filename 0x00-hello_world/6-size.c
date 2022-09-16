#include <stdio.h>

/**
 * main - size of various types
 *
 * Description: program that prints the size of various types on the computer
 *
 * Return: 0
 */

int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf(stderr, "Size of char: %zu byte\n", sizeof(charType));
	printf(stderr, "Size of int: %zu bytes\n", sizeof(intType));
	printf(stderr, "Size of long int: %zu bytes\n", sizeof(longintType));
	printf(stderr, "Size of long long int: %zu bytes\n", sizeof(longlongintType));
	printf(stderr, "Size of float: %zu bytes\n", sizeof(floatType));

	return (0);
}
