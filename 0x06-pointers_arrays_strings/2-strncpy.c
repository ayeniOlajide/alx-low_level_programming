#include "main.h"

/**
 * _strncpy - copy a string with n
 * @dest: comy to
 * @src: copy from
 * @n: number of char to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j > n)
	{
		dest[i] = '\0';
		 j++;
	}

	return (dest);
}
