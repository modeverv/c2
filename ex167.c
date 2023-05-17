#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[100], c;
	char *ret;

	printf("文字列s > ");
	scanf("%s%*c", s);
	printf("文字c > ");
	scanf("%c", &c);

	ret = strchr(s, c);

	if (ret == NULL)
	{
		printf("%s の中に %c は含まれません。\n", s, c);
	}
	else
	{
		printf("%s の中の %c の位置は %d です。\n", s, c, ret - s);
	}

	return 0;
}
