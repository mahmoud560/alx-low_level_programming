#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_negative - assign random number
 * @i : integer
 * if number is greater than 0:is positive, if it's 0
 * Return: Always 0 (Success)
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else 
		printf("%d is negative\n", i);
}
