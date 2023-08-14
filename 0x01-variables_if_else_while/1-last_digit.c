#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (m > 5)
		printf("the last digit of %d is %d and greater than 5", n, m);
        else if (m == 0)
	       	printf("the last digit of %d is %d and is equal zero", n, m);
        else if (m < 6 && m != 0)
	       	printf("the last digit of %d is %d and less than 6 and not 0", n, m);
	printf("\n");
	return (0);
}
