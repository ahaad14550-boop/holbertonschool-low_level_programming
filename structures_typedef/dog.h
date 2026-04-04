#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct that creates a dog info type
 * @name: First member (char *)
 * @age: Second member (float)
 * @owner: Third member (char *)
 *
 * Description: This structure stores basic information about a dog,
 * including its name, age, and who owns it.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
