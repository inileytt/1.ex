#include <stdio.h>

int main() {
	int number = 0;
	int temp = 0;
	int second = 0;
	int sum = 0;

	printf("Enter three-digit number\n");
	scanf("%d", &number);
	
	if (number) {
		second = number % 10;
		number = number / 10;
		sum = number % 10;
		number = number / 10;
		temp = second + sum + number;
	}
	
	printf("%d\n", temp);

	return 0;
}
