#include "dog.h"
/**
 * init_dog - intializesnthe values of a dog struct
 * @d: struct to be initialised
 * @name: namento be initialized
 * @age: age.to be initialized
 * @owner: name of owner to.be initialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
