#include <stdio.h>

int main(void)
{
	int x = 3, y = 5;
	int *ip;

	printf("x = %d\n", x);

	ip = &x;
	*ip = 7;

	printf("x = %d\n", x);

	ip = &y;
	x = *ip;

	printf("x = %d\n", x);

	return 0;
}
