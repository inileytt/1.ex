#include <stdio.h>

int main() {
	int a = 1;
	int sum = 0;
	while ( a != 0) {
		printf("enter number until you enter 0\n");
		scanf("%d", &a);
		sum += a;
	}
	printf("%d\n", sum);

	return 0;
}	
