#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - a function that create a char array
* @size: size of array
* @c: character to initialize it to
* Return: a pointer to the array
*/

char *create_array(unsigned int size, char c)
{
char *arr = malloc(sizeof(char) * size);
arr[0] = c;
return (arr);
}
