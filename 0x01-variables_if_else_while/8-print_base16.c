#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always (0) Success
 */
int main(void)
{
        char low;
	int d;

        for (d = '0'; d <= '9'; d++)
	putchar(d);

        for (low = 'a'; low <= 'f'; low++)
        putchar(low);
        putchar('\n');
        return(0);
}