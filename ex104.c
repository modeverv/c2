#include <stdio.h>

int main(void)
{
	int i;

	i = 1;

	do printf("%d ", i++); while (i <= 5);

	printf("\n");

	return 0;
}
