#include <stdio.h>

int main(void)
{
	char str[] = { 's', 't', 'r', 'i', 'n', 'g', '\0' };

	printf("%s\n", str);

	str[1] = 'p';
	printf("%s\n", str);

	str[4] = '\0';
	printf("%s\n", &str[1]);

	return 0;
}
