#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[100], s2[100];

	printf("文字列s1 > ");
	scanf("%s", s1);

	strcpy(s2, s1);

	printf("s1をs2にコピーしました。\ns2に格納されている文字列は %s です。\n", s2);

	return 0;
}
