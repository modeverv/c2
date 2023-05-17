#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 6

int main(void)
{
	int ia[NUM];
	int i;

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

	for (i = 0; i < NUM / 2; ++i)
	{
		/* ia[i]とia[NUM - i - 1]の値を入れ替える */
		int tmp;
		tmp = ia[i];
		ia[i] = ia[NUM - i - 1];
		ia[NUM - i - 1] = tmp;
	}

	printf("\n逆順にしました\n\n");

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
