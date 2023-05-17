#include <stdio.h>

void decuple1(int);

int main(void)
{
	int x = 5;

	printf("x = %d\n", x);

	decuple1(x);

	printf("x = %d\n", x);

	return 0;
}

void decuple1(int y)
{
	y *= 10;
}
