#include <stdio.h>

int main() {
	int counter = 0;
	while (getchar() != EOF) {
		counter++;
	}
	printf("%d\n", counter);
	return 0;
}
