#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog class
 *
 * @name: Name of dog
 *
 * @age: Age of dog
 *
 * @owner: Dog's owner
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
