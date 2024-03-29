#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Information of the dog.
 * @name:dog's name.
 * @age: Age of the dog
 * @owner: Who is the owner of the dog
 *
 * Description: It has no description for this struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
