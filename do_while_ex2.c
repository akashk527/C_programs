#include<stdio.h>

int main()
{
	int n=98765, digit, sum=0;
	do{
		digit= n % 10;
		sum = sum + digit;
		n=n / 10;
	}while(n>0);
		printf("Total Sum : %d",sum);
	return 0;
}
