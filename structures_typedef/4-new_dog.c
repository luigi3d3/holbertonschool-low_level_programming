#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - char float
 * @name: name dog
 * @age: age dog
 * @owner: owner dog
 *
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
	{
		return (NULL);
	}

	my_dog->name = malloc(strlen(name) + 1);

	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	strcpy(my_dog->name, name);

	my_dog->owner = malloc(strlen(owner) + 1);

	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	strcpy(my_dog->owner, owner);

	my_dog->age = age;

	return (my_dog);
}
