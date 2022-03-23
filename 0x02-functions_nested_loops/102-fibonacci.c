#include <stdio.h>

/**
 * main - main block 102-fibonacci
 * Description: prints the first 50 fibonacci numbers
 * starting wuth 1 and 2, followed by a new line
 * Return: (0)
 */

int main(void)
{
	int i = 0;
	long int a = 0, b = 1, next;

	while (i < 50)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
