#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog info
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner dogs
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
