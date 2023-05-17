#include <stdio.h>

#define NUM 5

int main(void)
{
	char ca[NUM];
	int ia[NUM];
	int i;

	/* char型の大きさを表示 */
	printf("sizeof(char) = %d\n\n", (int)sizeof(char));

	/* caの各要素のアドレスを表示 */
	for (i = 0; i < NUM; ++i)
	{
		printf("&ca[%d] = %p\n", i, &ca[i]);
	}

	/* caを評価した値を表示 */
	printf("\nca     = %p\n\n", ca);

	/* int型の大きさを表示 */
	printf("sizeof(int) = %d\n\n", (int)sizeof(int));

	/* iaの各要素のアドレスを表示 */
	for (i = 0; i < NUM; ++i)
	{
		printf("&ia[%d] = %p\n", i, &ia[i]);
	}

	/* iaを評価した値を表示 */
	printf("\nia     = %p\n", ia);

	return 0;
}
