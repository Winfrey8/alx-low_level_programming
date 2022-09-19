#include <stdio.h>
/**
 *main - print alphabets in lower case and upper case
 *
 *Description: using the main function
 *prints alphabets in lower and upper case
 *Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putcha(ch);
}
putchar("\n");
return (0);
