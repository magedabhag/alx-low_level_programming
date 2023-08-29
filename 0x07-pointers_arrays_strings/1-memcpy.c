#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer ti put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
	{
		dest[itr] = scr[itr];
	}
        return (dest);
}
