/**
 * print-dog - definicion de la variables tipo en el struct
 * @d: es puntero del struc
 * @name: define nombre
 * @age: define dueño
 * @owner: define dueño
 * Description - definir variables en la struct

#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
	if ( d == NULL)
	{
		return;
	}

	printf ("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf ("Age: %.1f\n", d->age);
	printf ("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
