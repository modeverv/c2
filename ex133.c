#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 6

int main(void)
{
	int ia[NUM];
	int i;
	int tmp;

	srand((unsigned int)time(NULL));

	/* ia[0]〜ia[NUM - 1]に0以上9以下の乱数を代入 */
	for (i = 0; i < NUM; ++i)
	{
		ia[i] = rand() % 10;
	}

	/* iaの要素の値を表示 */
	for (i = 0; i < NUM; ++i)
	{
		printf("[%d]  ", i);
	}
	printf("\n");
	for (i = 0; i < NUM; ++i)
	{
		printf(" %d   ", ia[i]);
	}
	printf("\n");

	tmp = ia[NUM - 1];
	/* ia[NUM - 2]〜ia[0]を1つずつ後ろに移動する */
	for (i = NUM - 2; i >= 0; --i)
	{
		ia[i + 1] = ia[i];
	}
	ia[0] = tmp;

	printf("\n移動しました\n\n");

	/* iaの要素の値を表示 */
	for (i = 0; i < NUM; ++i)
	{
		printf("[%d]  ", i);
	}
	printf("\n");
	for (i = 0; i < NUM; ++i)
	{
		printf(" %d   ", ia[i]);
	}
	printf("\n");

	return 0;
}
