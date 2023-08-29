#include "main.h"

/**
 * *_strchr - copies memory area
 * @s: memory area
 * @c: sourse
 *
 * Return: the pointer to dest.
*/

char *_strchr(char *s, char c)
{
	int itr;

	for (itr = 0; s[itr] >= '\0'  ; itr++)
	{
		if (s[itr] == c)
		{
			return (s + itr);
		}
	}
	return ('\0');
}
