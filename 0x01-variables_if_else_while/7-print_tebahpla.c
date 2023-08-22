#include <stdio.h>

/**
 * main - entry point
 *
 * Description: false or true validation
 *
 * Return: 0 (success)
*/

int main(void)
{
	char  ch = 'z';

	while (ch >= 'z')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
