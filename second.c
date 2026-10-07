#include <stdio.h>

int main() {
	int a = 0;

	printf("hi, say any number\n");
	scanf("%d", &a);

	if ( a % 2 == 0){
		printf("youre number is even\n");

	} else {
		printf("your number is odd\n");
	}
	
	return 0;
}
