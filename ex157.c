#include <stdio.h>
#include <string.h>

int main(void)
{
	const char *cp;

	cp = "ABC";
	printf("\"%s\" の長さは %d\n", cp, (int)strlen(cp));

	cp = "Yamada Taro";
	printf("\"%s\" の長さは %d\n", cp, (int)strlen(cp));

	cp = "";
	printf("\"%s\" の長さは %d\n", cp, (int)strlen(cp));

	return 0;
}
