#include <stdio.h>
#include <string.h>

int main(void)
{
	const char *cp = "string";

	printf("%c\n", *(cp + 2));
	printf("%s\n", cp + 2);
	printf("%d\n", (int)strlen(cp + 2));

	return 0;
}
