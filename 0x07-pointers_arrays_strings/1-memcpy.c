#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: memory area
 * @src: sourse
 * @n: lenth of src to be copied
 *
 * Return: pointer to dest.
*/

char *_memcpy(char *dest, char src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
	{
		dest[itr] = scr[itr];
	}
	return (dest);
}