#include <stdio.h>

int main(void)
{
	int answer;

	printf("3 + 5 = ");
	scanf("%d", &answer);

	while (answer != 8)
	{
		printf("3 + 5 = ");
		scanf("%d", &answer);
	}

	printf("正解です。\n");

	return 0;
}
