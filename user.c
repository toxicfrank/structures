#include <stdio.h>
#include <stdlib.h>
struct human
{
	char *name;
	float height;
	int weight;
};

int main(void)
{
	struct human h = {"James", 175.6, 80};
	printf("%s %.2f %d\n", h.name, h.height, h.weight);

	return (0);
}
