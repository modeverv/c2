#include <stdio.h>

int main(void)
{
	int num, x;

	printf("num > ");
	scanf("%d", &num);
	printf("位置 > ");
	scanf("%d", &x);

	printf("numの下位から%dビット目の値は %d です。\n", x, num >> (x - 1) & 1);

	return 0;
}
