#include <stdio.h>

int main(void)
{
	char *cp = "string";
	int i;

	printf("cp = %p\n\n", cp);

	for (i = 0; i < 6; ++i)
	{
		printf("*(cp + %d) = '%c'\n", i, *(cp + i));
	}

	return 0;
}
