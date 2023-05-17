#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 6

void bubble_sort(int *, int);

int main(void)
{
	int ia[NUM];
	int i;

	srand((unsigned int)time(NULL));

	/* ia[0]～ia[NUM - 1]に0以上9以下の乱数を代入 */
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

	bubble_sort(ia, NUM);

	printf("\n昇順に並び替えました。\n\n");

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

/* bubble_sort()の定義 (関数を作る) */

