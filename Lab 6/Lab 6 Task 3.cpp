#include <stdio.h>
int main () {
	int number;
	do{
		printf("Enter a positive number: ");
		scanf("%d", &number);
		if (number<=0) {
			printf("Error! \n");
		}
}
		while (number<=0); 
		printf("Valid Number: %d\n", number);
	
	
      return 0;	
}
