#include <stdio.h>
#include <stdlib.h>

typedef struct human
{
	char *name;
	float height;
	int weight;
}human;

int main(void)
{
	human h = {"James", 175.6, 80};
	printf("%s %.2f %d\n", h.name, h.height, h.weight);

	return (0);
}
