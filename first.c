#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;
	int temp;

	printf("enter the  numbers\n");
	scanf("%d %d", &a, &b);
	temp = a;
	a = b;
	b = temp;
	printf("%d, %d\n", a, b);
	
	return 0;

}
