#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Always return 0
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);

	putchar('\n');

	return (0);
}
