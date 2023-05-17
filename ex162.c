#include <stdio.h>

int main(void)
{
	char name[20];
	int age;

	printf("名字を入力してください > ");
	scanf("%s", name);
	printf("年齢を入力してください > ");
	scanf("%d", &age);

	printf("%sさんの年齢は%d歳です。\n", name, age);

	return 0;
}
