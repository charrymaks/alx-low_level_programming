#include <stddef.h>

/**
 * _strlen - Calculates the length of a string.
 * @s: Pointer to the string.
 *
 * Return: The length of the string.
 */
size_t _strlen(const char *s)
{
	size_t len = 0;

	if (s == NULL)
		return (0);

	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}

