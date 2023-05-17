#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 6

void bubble_sort_r(int [], int);

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

	bubble_sort_r(ia, NUM);

	printf("\n最大値を末尾に移動しました。\n\n");

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

void bubble_sort_r(int ia[], int len)
{
	int i;

	for (i = 0; i < len - 1; ++i)
	{
		/* ia[i] > ia[i + 1]なら値を入れ替える */
		if (ia[i] > ia[i + 1])
		{
			int tmp;
			tmp = ia[i];
			ia[i] = ia[i + 1];
			ia[i + 1] = tmp;
		}
	}
}
