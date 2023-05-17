#include <stdio.h>

#define INT_BIT 32

int main(void)
{
	int i, num;

	printf("num > ");
	scanf("%d", &num);

	printf("numのビット列は ");
	for (i = INT_BIT - 1; i >= 0; --i)
	{
		printf(num >> i & 1 ? "1" : "0");
	}
	printf(" です。\n");

	return 0;
}
