#include <stdio.h>

void func(int *);

int main(void)
{
	int ia[] = { 1, 2, 3, 4, 5 };

	printf("sizeof ia = %d\n", (int)sizeof ia);

	func(ia);

	return 0;
}

void func(int *ip)
{
	printf("sizeof ip = %d\n", (int)sizeof ip);
}
