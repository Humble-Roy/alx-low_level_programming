#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - new dog
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 * Return: newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	int a = 0, b = 0, c;
	dog_t *doge;

	while (name[a] != '\0')
		a++;
	while (owner[b] != '\0')
		b++;
	doge = malloc(sizeof(dog_t));
	if (doge == NULL)
	{
		free(doge);
		return (NULL);

	}
	doge->name = malloc(a * sizeof(doge->name));
	if (doge->name == NULL)
	{
		free(doge->name);
		free(doge);
		return (NULL);
	}
	for (c = 0; c <= a; c++)
		doge->name[c] = name[c];
	doge->age = age;
	doge->owner = malloc(b * sizeof(doge->owner));
	if (doge->owner == NULL)
	{
		free(doge->owner);
		free(doge->name);
		free(doge);
		return (NULL);
	}
	for (c = 0; c <= b; c++)
		doge->owner[c] = owner[c];
	return (doge);
}
