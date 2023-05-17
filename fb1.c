#include <stdio.h>

typedef struct {
	char name[10];
	int height;
	int weight;
} PDATA;

void bubble_sort(PDATA *, int);

int main(void)
{
	int len, i;

	PDATA pd[] = {
		{ "Ito", 170, 71 },
		{ "Sato", 182, 74 },
		{ "Takahashi", 166, 54 },
		{ "Hasegawa", 153, 59 },
		{ "Yano", 161, 61 }
	};

	len = (int)(sizeof pd / sizeof pd[0]);

	for (i = 0; i < len; ++i)
	{
		printf("%sさんの身長は%dcmです。\n", pd[i].name, pd[i].height);
	}

	bubble_sort(pd, len);

	printf("\n身長の昇順に並べ替えました。\n\n");

	for (i = 0; i < len; ++i)
	{
		printf("%sさんの身長は%dcmです。\n", pd[i].name, pd[i].height);
	}

	return 0;
}

/* bubble_sort()の定義 (関数を作る) */

