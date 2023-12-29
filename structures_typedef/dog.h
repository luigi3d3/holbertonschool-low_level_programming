#ifndef dog_h
#define dog_h

/**
 * struct dog - Realizar definiciones de tipo
 * @name : definicion nombre
 * @owner : definicion del dueño
 * @age : definicion de la edad
 * Description: Definicion de los tipos de struct
 * Return:
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
