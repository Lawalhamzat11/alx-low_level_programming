#include "dog.h"
/**
 * new_dog - create a new struct
 * @name: namento be initialized
 * @age: age.to be initialized
 * @owner: name of owner to.be initialized
 * Return: the address of the new struct created
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (!new)
		return (NULL);
	new->name = malloc((strlen(name) + 1) * sizeof(char));
	if (!new->name)
	{
		free(new);
		return (NULL);
	}
	new->owner = malloc((strlen(owner) + 1) * sizeof(char));
	if (new->owner == NULL)
	{
		free(new);
		free(new->name);
		return (NULL);
	}
	strcpy(new->name, name);
	new->age = age;
	strcpy(new->owner, owner);
	return (new);
}
