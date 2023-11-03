#ifndef dog_h
#define dog_h

/**
 * struct dog - Realizar definiciones de tipo
 * @name : definicion nombre
 * @owner : definicion del dueño
 * @age : definicion de la edad
 * Description: Definicion de los tipos de struct
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
