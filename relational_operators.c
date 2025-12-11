#include<stdio.h>

int main(){
	int num1,num2;
	//Take user inputs
	printf("Enter 1st number : \n");
	scanf("%d",&num1);
	
	printf("Enter second number : \n");
	scanf("%d",&num2);
	
	//relational operation
	printf("num1 == num2 = %d \n",num1 == num2);
	printf("num1 != num2 = %d \n",num1 != num2);
	printf("num1 > num2 = %d \n",num1 > num2);
	printf("num1 < num2 = %d \n",num1 < num2);
	printf("num1 >= num2 = %d \n",num1 >= num2);
	printf("num1 <= num2 = %d \n",num1 <= num2);
	
	return 0;
}
