#include<stdio.h>

int main(){
	int num1,num2,max;
	//Take user inputs
	printf("Enter 1st number : \n");
	scanf("%d",&num1);
	
	printf("Enter second number : \n");
	scanf("%d",&num2);
	
	max = (num1 > num2) ? num1 : num2;
	
	printf("Maximum Number =%d \n", max);
	
	return 0;
}
