#include <stdio.h>

int main() {
	long long number;

	printf("enter the number and i print the last digit\n");
	scanf("%lld",  &number);

	printf("%lld\n", number % 10);

	return 0;

}
