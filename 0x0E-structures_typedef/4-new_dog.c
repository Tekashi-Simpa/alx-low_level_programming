#include "dog.h"
#include <stdlib.h>

/**
*new_dog - initializes the variable in struct
*@name: name of dog
*@age: age of dog
*@owner: owner of the dog
*Return: pointer to a struct
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t r;
dog_t *d;

r.name = name;
r.age = age;
r.owner = owner;
d = &r;

if (d && name && age && owner)
{
	return (d);
}
/*return (NULL); */
}


