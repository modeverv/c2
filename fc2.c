#include <stdio.h>

unsigned int multi(unsigned int, unsigned int);

int main(void)
{
	unsigned int i1, i2;

	printf("正の整数1 > ");
	scanf("%u", &i1);
	printf("正の整数2 > ");
	scanf("%u", &i2);

	printf("%u * %u = %u\n", i1, i2, multi(i1, i2));

	return 0;
}

/* multi()の定義 (関数を作る) */

