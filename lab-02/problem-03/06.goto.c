#include <stdio.h>

int main() {
	int counter = 0;
L0:
	if (getchar == EOF) {
		goto L1;
	}
	counter++;
	goto L0;
L1:
	printf("%d\n", counter);
	return 0;
}
