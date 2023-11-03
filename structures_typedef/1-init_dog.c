/**
 * init_dog - definicion de la variables tipo en el struct
 * @name - define nombre
 * @age - define edad
 * @owner - define dueño
 * Descrition - definir variable en la struct


#include <stdio.h>
#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
        if(d != NULL)
        {
                d->name = name;
                d->age = age;
                d->owner = owner;
        }
}
