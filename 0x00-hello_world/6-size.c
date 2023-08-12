#include <stdio.h>

/**
 * main - entry point
 *
 * description: size of to print the size of various typs
 *
 * always return 0
*/

int main(void)
{
	printf("Size of a chart: %lu byte(s)\n", sizeofa(char));
	printf("Size of aint: %lu byte(s)\n", sizeofa(int));
	printf("Size of a long int: %lu byte(s)\n", sizeofa(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeofa(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeofa(float));
	return (0);
}
