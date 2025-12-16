#include<stdio.h>

int main(){
	int bal,witd;
	printf("Enter Your Balance : ");
	scanf("%d",&bal);
	printf("Enter your Withdraw balance : ");
	scanf("%d",&witd);
	
	if(witd<=bal){
		printf("withdraw Succesfull..\n");
		printf("remining balance = %d",bal-witd);
	}
	else{
		printf("insufficient balance");
	}
	
	return 0;
}
