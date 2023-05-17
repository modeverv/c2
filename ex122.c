#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int point = 0;
	int cont;

	srand((unsigned int)time(NULL));

	do
	{
		printf("現在の得点: %d\n", point);
		printf("カードを引きますか (はい: 1, いいえ: 0) > ");
		scanf("%d", &cont);
		if (cont)
		{


			/* ここに処理を記述 */


		}
		printf("\n");
	} while (cont);

	printf("あなたの得点は %d 点です\n", point);

	return 0;
}
