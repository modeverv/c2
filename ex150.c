#include <stdio.h>

int main(void)
{
	const int consumption_tax_rate = 10;
	double price;

	printf("税抜き価格 > ");
	scanf("%lf", &price);

	price *= 1 + (double)consumption_tax_rate / 100;

	printf("税込み価格は%.0f円です。\n", price);

	return 0;
}
