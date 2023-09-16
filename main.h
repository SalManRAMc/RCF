#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

int _atoi(char* stringinput);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _isdigit(int c);
void print_numbers(const char *separator, const unsigned int n, ...);

#endif
