#include <stdio.h>

void decuple1(int);
void decuple2(int *);

int main(void)
{
	int x = 5;

	printf("x = %d\n", x);

	decuple1(x); /* 変数xの値を渡す */

	printf("x = %d\n", x);

	decuple2(&x); /* 変数xへのポインタを渡す */

	printf("x = %d\n", x);

	return 0;
}

/* 仮引数yで変数xの値を受け取る */
void decuple1(int y)
{
	y *= 10;
}

/* 仮引数ipで変数xへのポインタを受け取る */
void decuple2(int *ip)
{
	*ip *= 10;
}
