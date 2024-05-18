#include "ciph.h"

/**
* cipher - takes a string with normal text, returns text that has been ciphered
* @str: string to be ciphered
* @ciph: cipher alphabet
*
* Return: altered string
*/

char *cipher(char *str, char *ciph)
{
	int i, j;
	char *ciphered_sentence;
	char *alphabet = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	int sentence_length = strlen(str);

	ciphered_sentence = (char *) malloc((sentence_length + 1) * sizeof(char));
	if (ciphered_sentence == NULL)
	{
		exit(10);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			if (str[i] == alphabet[j])
			{
				ciphered_sentence[i] = ciph[j];
			}
		}
	}

	return (ciphered_sentence);
}

/**
* decipher - deciphers a puzzled string and returns it to it's original form
*
* @str: puzzled up string (I'll change the name of the parameter in the future)
* @key: key cipher to decode message/string
*
* Return: Original Message, Null on failure


char *decipher(char *str, char *key)
{
	return (NULL);
}
*/