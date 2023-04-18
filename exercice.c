#include <stdio.h>
#include <stdlib.h>
struct User
{
	int *age;
	char *name;
	char *email;
};
struct User *new_user(int *age, char *name, char *email)
{
	struct User *user;
	user = malloc(sizeof(struct User));
	if (user == NULL)
		return (NULL);
	user->name = name;
	user->email = email;
	user->age = age;
	return (user);
}
int main (void)
{
	struct User *user;
	
	user = new_user(10, "Fooman", "Foo@c.structures");
	if (user == NULL)
		return (1);
	printf("%s\n", user->name);
	printf("%s\n", user->email);
	printf("%d\n", user->age);
	return (0);
}
