#include <stdio.h>
#include <time.h>

/**
 * main - block
 * Return: 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negetive\n", n);
	} else if (n == 0)
	{
		printf("%dis zero\n", n);
	} else 
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
