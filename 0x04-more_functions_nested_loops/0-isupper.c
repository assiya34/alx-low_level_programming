#include "main"

/**
 * _isupper - check c is upper
 *
 * desciption: input for alphabet
 *
 * return: 1 if its uppercase. 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
