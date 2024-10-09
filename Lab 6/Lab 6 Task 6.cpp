#include <stdio.h>

int main()	{
	
	int num;
	int h1 = 0, h2 = 1;
	int next = h1 + h2;
	int prime_flag = 0;
	
	printf("Enter a num: ");
	scanf("%d", &num);
	
	if (num == 0 || num == 1)	{
		prime_flag = 1;
	}	else	{
		for (int i = 2; i <= num / 2; i++)	{
			
			if (num % i == 0) { 
				prime_flag = 1;
				break;
			}
		}
	}
	if (prime_flag == 1)	{
		printf("Num is not prime\n");
	}	else	{
		printf("Num is prime\n");
	}
	printf("Fibonacci Series for the %d terms: \n", num);
	printf("%d %d ", h1, h2);
	for (int i = 3; i <= num; i++)	{
		printf("%d ", next);
		h1 = h2;
		h2 = next;
		next = h1 + h2;
	}
	return 0;
}