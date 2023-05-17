#include <stdio.h>

#define NUM 15

int main(void)
{
	int fibo[NUM];
	int i;

	fibo[0] = fibo[1] = 1;

	/* ここでfibo[2]〜fibo[14]に値を代入 */


	printf("フィボナッチ数列は ");
	for (i = 0; i < NUM; ++i)
	{
		printf("%d, ", fibo[i]);
	}
	printf("…\n");

	return 0;
}
