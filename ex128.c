#include <stdio.h>

int main(void)
{
	int ia[5];
	double da[7];

	printf("int型の大きさ: %d\n\n", (int)sizeof(int));

	printf("ia[0]の大きさ: %d\n", (int)sizeof ia[0]);
	printf("iaの大きさ: %d\n", (int)sizeof ia);
	printf("iaの要素数: %d\n\n", (int)(sizeof ia / sizeof(int)));

	printf("double型の大きさ: %d\n\n", (int)sizeof(double));

	printf("da[0]の大きさ: %d\n", (int)sizeof da[0]);
	printf("daの大きさ: %d\n", (int)sizeof da);
	printf("daの要素数: %d\n", (int)(sizeof da / sizeof da[0]));

	return 0;
}
