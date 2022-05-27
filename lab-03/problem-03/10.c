#include <stdlib.h>
#include <stdio.h>

void fill_with_random(int *arr, int n) {
	for (int i = 0; i < n; ++i) {
		arr[i] = rand();
	}
}

long long sum(int *arr, int n) {
	long long ans = 0;
	for (int i = 0; i < n; ++i) {
		ans += arr[i];
	}
	return ans;
}

int main() {
	int n;
	scanf("%d", &n);

	int *arr = malloc(n * sizeof(int));

	fill_with_random(arr, n);
	printf("%lld\n", sum(arr, n));

	free(arr);
	arr = NULL;
	return 0;
}
