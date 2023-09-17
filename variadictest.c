#include "main.h"



void print_Chars(char *format, va_list cars)
{
	if (!format)
		exit(10);
	printf("%c\n", va_arg(cars, char));
}

void print_Chars2(char *format, char chartbp)
{
	if (!format)
		exit(20);
	printf("%c\n", chartbp);
}

void testprint(char *indicator, ...)
{
	va_list charparams;

	printchars
}
int main()
{




}
