#include <stdio.h>

#define NUM_R 3 /* 行数 */
#define NUM_C 2 /* 列数 */

int main(void)
{
	int ta[NUM_R][NUM_C];
	int i, j;

	/* taの要素に値を代入 */
	for (i = 0; i < NUM_R; ++i)
	{
		for (j = 0; j < NUM_C; ++j)
		{
			printf("ta[%d][%d] = ", i, j);
			scanf("%d", &ta[i][j]);
		}
	}
	printf("\n");

	/* taの要素の値を表示 */
	for (i = 0; i < NUM_R; ++i)
	{
		for (j = 0; j < NUM_C; ++j)
		{
			printf(" %4d", ta[i][j]);
		}
		printf("\n");
	}

	return 0;
}
