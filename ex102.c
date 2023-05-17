#include <stdio.h>

int main(void)
{
	char grade;

	printf("成績を入力してください (S, A, B, C, D) > ");
	scanf("%c", &grade);

	switch (grade)
	{
		case 'S':
			printf("大変素晴らしいです。\n");
			break;
		case 'A':
			printf("素晴らしいです。\n");
			break;
		case 'B':
			printf("まずまずです。\n");
			break;
		case 'C':
			printf("もう少し頑張りましょう。\n");
			break;
		case 'D':
			printf("もっと頑張りましょう。\n");
			break;
		default:
			printf("入力が正しくありません。\n");
			break;
	}

	return 0;
}
