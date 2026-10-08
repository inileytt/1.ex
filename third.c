#include <stdio.h>

int main () {
	int b = 0;

	printf("enter the number\n");
	scanf("%d", &b);
	
	for ( int i= 0; i <= b; i++) {
	     if ( i % 2 == 0 ){
	       	printf("%d\n", i );
		}
	}
	return 0;
}
