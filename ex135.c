#include <stdio.h>

int main(void)
{
	char c;
	int i;
	char *cp;
	int *ip;

	cp = &c;
	ip = &i;

	printf("変数cのアドレス: %p\n", cp);
	printf("変数iのアドレス: %p\n", ip);

	return 0;
}
