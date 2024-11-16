#include "dog.h"
#include <stdio.h>

/**
 * init_dog - A function that initialize a variable of type struct dog
 *
 * @x: name
 * @name: dog name
 * @age: dog age
 * @owner: dog ower
 *
 * Return: 0
 */

void init_dog(struct dog *x, char *name, float age, char *owner)
{
	if (x)
	{
		x->name = name;
		x->age = age;
		x->owner = owner;
	}
	else
	{
		return;
	}
}
