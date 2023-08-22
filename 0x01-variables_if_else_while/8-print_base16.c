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
	int digit = 48; /*48; decimal rep of 0*/

	while (ch <= 102)
	{
		putchar(digit);

		/* after 9 we jump till 96; `**/
		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');
	return (0);
}
