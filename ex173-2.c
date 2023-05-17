#include <stdio.h>

typedef struct {
	char name[10];
	int height;
	int weight;
} PDATA;

int main(void)
{
	PDATA pd[] = {
		{ "Ito", 170, 71 },
		{ "Sato", 182, 74 },
		{ "Takahashi", 166, 54 },
		{ "Hasegawa", 153, 59 },
		{ "Yano", 161, 61 }
	};

	int len, max, i;

	len = (int)(sizeof pd / sizeof pd[0]);

	for (max = 0, i = 1; i < len; ++i)
	{
		if (pd[i].height > pd[max].height)
		{
			max = i;
		}
	}

	printf("%sさん: %dcm\n", pd[max].name, pd[max].height);

	return 0;
}
