#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - l assign a random number to the variable n each time it is executed
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negstive\n", n);
	return (0);
}
