#include <stdio.h>

int main(void)
{
	int n[3];

	printf("整数を2つ入力してください。\n");
	printf("1つ目 > ");
	scanf("%d", &n[0]);
	printf("2つ目 > ");
	scanf("%d", &n[1]);

	if (n[0] < n[1])
	{
		n[2] = n[0];
		n[0] = n[1];
		n[1] = n[2];
	}

	printf("大きい方は%d、小さい方は%dです。\n", n[0], n[1]);

	return 0;
}
