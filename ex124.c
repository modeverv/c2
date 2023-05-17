#include <stdio.h>

int main(void)
{
	int price1, price2, price3, price4, price5;
	int max_id;    /* 最高額の商品の番号 */
	int max_price; /* 最高額の商品の価格 */

	printf("商品 1 の価格 > ");
	scanf("%d", &price1);
	printf("商品 2 の価格 > ");
	scanf("%d", &price2);
	printf("商品 3 の価格 > ");
	scanf("%d", &price3);
	printf("商品 4 の価格 > ");
	scanf("%d", &price4);
	printf("商品 5 の価格 > ");
	scanf("%d", &price5);

	max_id = 1;
	max_price = price1;
	if (price2 > max_price)
	{
		max_id = 2;
		max_price = price2;
	}
	if (price3 > max_price)
	{
		max_id = 3;
		max_price = price3;
	}
	if (price4 > max_price)
	{
		max_id = 4;
		max_price = price4;
	}
	if (price5 > max_price)
	{
		max_id = 5;
		max_price = price5;
	}

	printf("最高額の商品の番号は %d、価格は %d です。\n", max_id, max_price);

	return 0;
}
