#include <stdio.h>

int main(void)
{
	int answer = 0, is_answered = 0;

	while (!is_answered || answer != 8)
	{
		is_answered = 1;
		printf("3 + 5 = ");
		scanf("%d", &answer);
	}

	printf("正解です。\n");

	return 0;
}
