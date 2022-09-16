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
	int intType;
	float floatType;
	long longType;
	long long longlongType;
	char charType;

	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of long: %zu bytes\n", sizeof(longType));
	printf("Size of long long: %zu bytes\n", sizeof(longlongType));
	printf("Size of char: %zu byte\n", sizeof(charType));

	return (0);
}
