#include "main.h"

/**
 *  * print_alphabet_x10 -> prints the lowercase alphabets
 *  Returns :0
 */

void print_alphabet_x10(void)
{
	int j;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		}
		putchar('\n');
	}
}
