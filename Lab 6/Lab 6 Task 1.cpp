#include <stdio.h>
int main () {
	int number;
	int i;
	int factorial=1;
	printf("Enter the number: ");
	scanf("%d", &number);
	
	if (number<0) {
		printf("Error!");
	} else {
		for (int i=1; i<=number; ++i) {
			factorial*=i;
	}
	}
			 printf("Factorial of %d= %d",number ,factorial);

	return 0;
}

