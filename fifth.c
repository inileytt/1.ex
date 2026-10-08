#include <stdio.h>

int main() {
	int number = 0;
	int sum = 0;

	printf("Enter any number\n");
	scanf("%d", &number);
	
	while(number != 0) {
		sum = sum + number % 10;
		number = number / 10;
	}
	
	printf("sum = %d\n", sum);

	return 0;
}
