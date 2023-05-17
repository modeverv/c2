#include <stdio.h>

int main(void)
{
	char str[10];

	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\0';

	printf("%s\n", str);

	str[3] = 'd';
	str[4] = 'e';
	str[5] = 'f';
	str[6] = '\0';

	printf("%s\n", str);

	return 0;
}
