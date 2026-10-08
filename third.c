#include <stdio.h>

int main () {
	int b = 0;

	printf("enter the number and i say its divide 3 and 5\n");
	scanf("%d", &b);

	if (b % 3 == 0 && b % 5 == 0) {
		printf("yes it do!!\n");
	} else {
		printf("no ((\n");
	}

	return 0;
}
