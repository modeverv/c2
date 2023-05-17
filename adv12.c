#include <stdio.h>

int main(void)
{
	float f1, f2, sum;

	f1 = 123000;
	f2 = 0.045;
	sum = f1 + f2;

	printf("f1 = %f\nf2 = %f\nf1 + f2 = %f\n\n", f1, f2, sum);

	f1 = 1230000;
	f2 = 0.045;
	sum = f1 + f2;

	printf("f1 = %f\nf2 = %f\nf1 + f2 = %f\n", f1, f2, sum);

	return 0;
}
