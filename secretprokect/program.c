#include "ciph.h"

/*
* main - tests my code
*
*
* Return: 0 in case of success
*/

int main(void)
{
	char *secret = "YyOoUuRrEeAaBbLlSsIiNnGgHhJjKkMmPpQqTtVvWwXxZzCcDdFf";
	char message[999];

	scanf("%s", message);
	printf("The coded Message is: \n %s \n", cipher(message, secret));

	return (0);
}