#include <string.h>
#include "monty.h"
/**
 * _atoi - change an string into an integer and check error
 * @nptr: the string pointer
 * @endptr: pointer to first, non-invalid character
 * @base: the base of conversion
 *
 * Return: the read number or 0
 */
int _atoi(char *nptr, char **endptr, int base)
{
	if (nptr && *nptr)
		return (strtol(nptr, endptr, base));
	return (0);
}
