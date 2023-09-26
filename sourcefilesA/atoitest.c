#include <stdio.h>
#include "main.h"

int _atoi(char* stringinput)
{
        unsigned int result = 0;
        int sign= 1;

	if (*stringinput == '-')
                        sign = -1;

        while (*stringinput)
        {
		if (*stringinput >= '0' && *stringinput <= '9')
                        result = (result * 10) + (*stringinput - '0');
		*stringinput++;
        }
        return (sign * result);
}

int main()
{
	int x, y, z;
	
	x = _atoi("800");
	y = _atoi("766");
	z = _atoi("-98");
	printf("check numbers \n%d\n%d\n%d\n", x, y, z);

	return (0);
}
