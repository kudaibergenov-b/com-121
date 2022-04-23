#include <stdio.h>

int main() {
	char c;
	getchar();
	asm(
		"add $32, %%al;"
		"mov %%al, %0"
		: "=r"(c)
		:
		:
	);

	putchar(c);
	putchar('\n');
	return 0;
}
