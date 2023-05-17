#include <stdio.h>

int main(void)
{
	int ta[4][3] = {
		{  10,  20,  30 },
		{  40,  50,  60 },
		{  70,  80,  90 },
		{ 100, 110, 120 }
	};

	printf("ta[1]は&ta[1][0]と同義\n");
	printf("  ta[1]: %p\n", ta[1]);
	printf("  &ta[1][0]: %p\n\n", &ta[1][0]);

	printf("*(ta[3] + 2)はta[3][2]の値\n");
	printf("  *(ta[3] + 2) = %d\n", *(ta[3] + 2));
	printf("  ta[3][2] = %d\n", ta[3][2]);

	return 0;
}
