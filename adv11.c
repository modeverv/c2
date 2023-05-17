#include <stdio.h>

int main(void)
{
	float sum;
	int i;

	for (sum = 0, i = 0; i < 1000000; ++i)
	{
		/* 0.000001(100万分の1)を100万回足す */
		sum += 0.000001;
	}

	printf("100万分の1を100万回足すと %f\n", sum);

	return 0;
}
