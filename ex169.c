#include <stdio.h>
#include <string.h>

int main(void)
{
	/* 3人分の名前(9文字以下)を格納する2次元配列 */
	char name[3][10];

	int i;

	/* 1人目は "Morimoto" */
	strcpy(name[0], "Morimoto");

	/* 2人目と3人目はキーボードから入力 */
	printf("2人目 > ");
	scanf("%s", name[1]);
	printf("3人目 > ");
	scanf("%s", name[2]);

	printf("\n");

	/* 3人の名前を表示 */
	for (i = 0; i < 3; ++i)
	{
		printf("%d人目: %s\n", i + 1, name[i]);
	}

	printf("\n");

	/* 1人目の名前を "Morimoto" から "Mori" に変更して表示 */
	name[0][4] = '\0';
	printf("%s\n", name[0]);

	return 0;
}
