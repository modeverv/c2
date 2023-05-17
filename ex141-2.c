#include <math.h>
#include <stdio.h>

void sqrt2(double *);

int main(void)
{
	double d;

	printf("0以上の数 > ");
	scanf("%lf", &d);

	sqrt2(&d);

	printf("平方根は %f です。\n", d);

	return 0;
}

void sqrt2(double *dp)
{
	*dp = sqrt(*dp);
}
