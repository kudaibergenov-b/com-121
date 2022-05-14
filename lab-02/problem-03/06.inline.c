#include <stdio.h>

int main() {
	int counter = 0;
	asm(
		"L0:"
		"call getchar;"
		"cmp $-1, %%eax;"
		"je L1;"
		"addl $1, %0;"
		"jmp L0;"
		"L1:"
		: "+m"(counter)
		:
		: "eax"
	);
	printf("%d\n", counter);
	return 0;
}
