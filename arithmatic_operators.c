#include<stdio.h>
int main(){
	int num1,num2;
	//Take user inputs
	printf("Enter 1st number : \n");
	scanf("%d",&num1);
	
	printf("Enter second number : \n");
	scanf("%d",&num2);
	
	//arithmatic operation
	printf("Addition = %d \n",num1 + num2);
	printf("substraction = %d \n",num1 - num2);
	printf("multipication = %d \n",num1 * num2);
	printf("divison = %d \n",num1/num2);
	printf("modulus= %d \n",num1%num2);
	
	return 0;
}
