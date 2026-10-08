#include <stdio.h>

int main() {
	int n = 0; 

	printf("enter any number\n");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++) {
		printf("%d\n", i);
	}
	
	return 0;
  }
