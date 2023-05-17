#include <stdio.h>

int mystrlen(const char *);

int main(void)
{
	const char *cp;

	cp = "ABC";
	printf("\"%s\" の長さは %d\n", cp, mystrlen(cp));

	cp = "Yamada Taro";
	printf("\"%s\" の長さは %d\n", cp, mystrlen(cp));

	cp = "";
	printf("\"%s\" の長さは %d\n", cp, mystrlen(cp));

	return 0;
}

int mystrlen(const char *s)
{
	int len;

	for (len = 0; *(s + len) != '\0'; ++len)
	{
		/* 何もしない */
	}

	return len;
}
