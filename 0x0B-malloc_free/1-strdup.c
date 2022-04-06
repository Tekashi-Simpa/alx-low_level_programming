#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* count - count the string
*@c: string to count
*Return: an int of count
*/

int count(char *c)
{
int i = 0;
int n = 0;
while (c[i] != 0)
{
	n++;
	i++;
}
return (n);
}


/**
* _strdup - copy a string
* @str: string to copy
* Return: a pointer to the array
*/

char *_strdup(char *str)
{
char *arr = malloc(sizeof(*str));
int i = 0;
if (str[0] == 0)
{
	return (NULL);
}
else if (arr != NULL)
{
	while (str[i] != 0)
	{
		arr[i] = str[i];
		i++;
	}
}
return (arr);
}
