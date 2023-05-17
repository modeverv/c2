#include <limits.h>
#include <stdio.h>

int main(void)
{
	printf("文字型\n");
	printf("  char型              : %d 〜 %d\n", CHAR_MIN, CHAR_MAX);
	printf("  signed char型       : %d 〜 %d\n", SCHAR_MIN, SCHAR_MAX);
	printf("  unsigned char型     : 0 〜 %u\n\n", UCHAR_MAX);

	printf("整数型\n");
	printf("  signed short int型  : %d 〜 %d\n", SHRT_MIN, SHRT_MAX);
	printf("  unsigned short int型: 0 〜 %u\n", USHRT_MAX);
	printf("  signed int型        : %d 〜 %d\n", INT_MIN, INT_MAX);
	printf("  unsigned int型      : 0 〜 %u\n", UINT_MAX);
	printf("  signed long int型   : %ld 〜 %ld\n", LONG_MIN, LONG_MAX);
	printf("  unsigned long int型 : 0 〜 %lu\n", ULONG_MAX);

	return 0;
}
