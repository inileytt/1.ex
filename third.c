#include <stdio.h>

int main() {
	int a = 0;

	printf("please, enter the number\n And I will show that it is divisible by 5 and 3\n");
	scanf("%d", &a);

	if ( a / 5 && a / 3) {
		printf("the number is divisible by both 3 and 5\n");
	} else {
		printf("no!!\n");
	}

	return 0;
}
