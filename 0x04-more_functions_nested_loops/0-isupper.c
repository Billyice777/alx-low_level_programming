#include "main.h"

/**
 * _isupper - checks if parameter is an uppercase character.
 * @c: input character.
 * Return: 1 if as an uppercase character, 0 in other case
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
