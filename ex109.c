#include <stdio.h>

int gvar = 1;

void inc_gvar(void);

int main(void)
{
	printf("(1) gvar = %d\n", gvar);

	inc_gvar();

	printf("(2) gvar = %d\n", gvar);

	return 0;
}

void inc_gvar(void)
{
	++gvar;
}
