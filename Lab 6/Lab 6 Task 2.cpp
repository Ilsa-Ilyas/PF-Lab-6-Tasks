#include <stdio.h>
int main () {
	int number;
	int i = 2;
	printf("Enter integer >= 1 \n");
	scanf("%d", &number);
	if (number<1) {
		printf("Invalid Number");
	} else {
		printf("Even numbers from 1 to %d are: \n", number);
	}
	while (i<=number) {
		printf("%d", i);
		i+=2;
		printf("\n");}

return 0;	
}