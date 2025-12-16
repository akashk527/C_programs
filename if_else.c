#include<stdio.h>

int main(){
	int amount;
	
	printf("Enter Your food order Amount : ");
	scanf("%d",&amount);
	
	if(amount>500){
		printf("Congaratulations You get free Dilivery");
	}
	else{
		printf("Dilivery charges will Apply");
	}
	
	return 0;
}
