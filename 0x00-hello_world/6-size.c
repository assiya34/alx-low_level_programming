#include <stdio.h>

/**
 * main - entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * return: always (0)
*/

int main(void)
{
	printf("Size of a chart: %u byte(s)\n", sizeofa(char));
	printf("Size of aint: %u byte(s)\n", sizeofa(int));
	printf("Size of a long int: %u byte(s)\n", sizeofa(long int));
	printf("Size of a long long int: %u byte(s)\n", sizeofa(long long int));
	printf("Size of a float: %u byte(s)\n", sizeofa(float));
	return (0);
}
