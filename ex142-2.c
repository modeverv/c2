#include <stdio.h>

void swap_int(int *, int *);

int main(void)
{
	int x, y;

	printf("xの値 > ");
	scanf("%d", &x);
	printf("yの値 > ");
	scanf("%d", &y);

	swap_int(&x, &y);

	printf("\nx = %d\ny = %d\n", x, y);

	return 0;
}

void swap_int(int *ip1, int *ip2)
{
	int tmp = *ip1;
	*ip1 = *ip2;
	*ip2 = tmp;
}
