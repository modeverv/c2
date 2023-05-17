#include <stdio.h>

int main(void)
{
	int i = 3;
	double d = 1.5;

	/* ポインタ変数ipとdpを宣言 */
	int *ip;
	double *dp;

	/* ipにiへのポインタを、dpにdへのポインタを代入 */
	ip = &i;
	dp = &d;

	/* iを使わずに(ipを使って)、iの値を2増やす */
	*ip += 2;

	/* iとdを使わずに(ipとdpを使って)、dの値をi倍する */
	*dp *= *ip;

	printf("i = %d\n", i);
	printf("d = %f\n", d);

	return 0;
}
