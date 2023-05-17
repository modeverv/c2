#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 6

void bubble_sort(int [], int);

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

void bubble_sort(int ia[], int len)
{
	int i, j;

	for (i = len - 1; i > 0; --i)
	{
		for (j = 0; j < i; ++j)
		{
			/* ia[j] > ia[j + 1]なら値を入れ替える */
			if (ia[j] > ia[j + 1])
			{
				int tmp;
				tmp = ia[j];
				ia[j] = ia[j + 1];
				ia[j + 1] = tmp;
			}
		}
	}
}
