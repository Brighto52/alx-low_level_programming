#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alpabets both lower and upper cases
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
