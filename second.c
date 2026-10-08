#include <stdio.h>

int main() {
	int a = 0;
	int sum = 0;

	printf("hi, say any number\n");
	scanf("%d", &a);

	for (int i = 1; i <= a; i++) {
		sum += i;
	}
	printf("%d\n", sum);

	return 0;
}
