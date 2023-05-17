#include <stdio.h>

void print_word(const char *);

int main(void)
{
	print_word("one two three");
	print_word("  four  five six");
	print_word("   seven eight     nine   ");
	print_word("  ");
	print_word("ten");

	return 0;
}

/* print_word()の定義 (関数を作る) */

