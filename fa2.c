#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 10000

int main(void)
{
	int inside;
	int i;

	srand((unsigned int)time(NULL));

	/* NUM回試行 */
	for (inside = 0, i = 0; i < NUM; ++i)
	{
		double x, y;
		x = (double)rand() / RAND_MAX;
		y = (double)rand() / RAND_MAX;
		if (x * x + y * y < 1)
		{
			/* 点(x, y)が扇形の中 */
			++inside;
		}
	}

	/* NUM回試行し、inside回が扇形の中 */
	printf("π = %f\n", 4.0 * inside / NUM);

	return 0;
}
