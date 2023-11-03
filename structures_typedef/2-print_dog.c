/**
 * print_dog - definicion de la variables tipo en el struct
 * @d: es puntero del struc
 * Description - definir variables en la struc
 */

#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
