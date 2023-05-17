#include <stdio.h>
#include <string.h>

typedef struct {
	char name[10];
	int age;
	double height;
} Person;

int main(void)
{
	Person p[2];

	/* p[0]はYamadaさんのデータ */
	strcpy(p[0].name, "Yamada");
	p[0].age = 35;
	p[0].height = 170.5;

	/* p[1]のデータはキーボードから入力 */
	printf("名前 > ");
	scanf("%s", p[1].name);
	printf("年齢 > ");
	scanf("%d", &p[1].age);
	printf("身長 > ");
	scanf("%lf", &p[1].height);

	printf("\n");
	printf("%sさんの年齢は%d歳、身長は%.1fcmです。\n", p[0].name, p[0].age, p[0].height);
	printf("%sさんの年齢は%d歳、身長は%.1fcmです。\n", p[1].name, p[1].age, p[1].height);

	return 0;
}
