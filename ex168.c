#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[100], s2[100];

	printf("文字列s1 > ");
	scanf("%s", s1);
	printf("文字列s2 > ");
	scanf("%s", s2);

	printf("%s と %s は%s。\n", s1, s2, strcmp(s1, s2) == 0 ? "等しいです" : "等しくありません");

	return 0;
}
