#include <stdio.h>

void swap(int *a, int *b) {
	printf("Before swapping in function: a = %d, b = %d\n", *a, *b);
        int t = *a;
        *a = *b;
        *b = t;
        printf("After swapping in function: a = %d, b = %d\n", *a, *b);

}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	printf("Before swapping: a = %d, b = %d\n", a, b);

	swap(&a, &b);

	printf("After swapping: a = %d, b = %d\n", a, b);

	return 0;
}
