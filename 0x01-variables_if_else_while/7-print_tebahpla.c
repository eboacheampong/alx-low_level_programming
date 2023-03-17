#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * headers above
 * Return: Always 0 then (Success)
 */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
		putchar('\n');

	return (0);
}
