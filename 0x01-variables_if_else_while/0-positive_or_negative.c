#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints
 * it positive o
 * Return: Also 0.
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2
if (n > 0)
	{
	printf("%d is positive\n", n);
	}
else if (n < 0)
	{
	printf("%d is negetive\n", n);
	}
else if (0 == 0)
	{
	printf("%d is zero\n", n);
	}
return (0);
}
