#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - new dog
 *
 * @name: name
 * @age: age
 * @owner: ower
 *
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *x;

	x = malloc(sizeof(dog_t));

	if (x == NULL)
		return (NULL);

	x->name = name;
	x->age = age;
	x->owner = owner;

	return (x);
}
