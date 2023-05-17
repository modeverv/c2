#include <stdio.h>

int main(void)
{
	int ia[] = { 1, 2, 3, 4, 5 };
	int *ip;

	/* ipはia[2]を指す */
	ip = &ia[2];

	/* ipの値とipが指すオブジェクトの値を表示 */
	printf("ip = %p\n", ip);
	printf("*ip = %d\n\n", *ip);

	/* (ip + 2)の値と(ip + 2)が指すオブジェクトの値を表示 */
	printf("ip + 2 = %p\n", ip + 2);
	printf("*(ip + 2) = %d\n\n", *(ip + 2));

	/* (ip - 1)の値と(ip - 1)が指すオブジェクトの値を表示 */
	printf("ip - 1 = %p\n", ip - 1);
	printf("*(ip - 1) = %d\n\n", *(ip - 1));

	/* ipをインクリメント。ipはia[3]を指す */
	++ip;

	/* ipの値とipが指すオブジェクトの値を表示 */
	printf("ip = %p\n", ip);
	printf("*ip = %d\n", *ip);

	return 0;
}
