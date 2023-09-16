#include "main.h"

/**
 * print_numbers - prints numbers in a sequence
 *
 * @separator: string separating integers
 * @n: number of integers to be printed
 * @...: integer arguments
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int counter = 0;
	va_list printable_numbers;

	va_start(printable_numbers, n);

	while (counter < n)
	{
		if (!separator)
			printf("%d", va_arg(printable_numbers, int));
		else if (counter < n - 1)
			printf("%d%s", va_arg(printable_numbers, int), separator);
		else
			printf("%d", va_arg(printable_numbers, int));

		counter++;
	}

	printf("\n");
	
	va_end(printable_numbers);
}

/**
* main - check the code
*
*Return: Always 0.
*/
int main(void)
{
	    print_numbers(", ", 4, 0, 98, -1024, 402);
	        return (0);
}
