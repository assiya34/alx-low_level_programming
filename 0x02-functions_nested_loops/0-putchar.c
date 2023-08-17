#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c
 * @c: the character to print
 *
 * return: 1 on rror -1
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}

