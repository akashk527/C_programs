#include<stdio.h>

int main(){
	
	int num;
	printf("Enter Number : \n");
	scanf("%d",&num); //20
	
	printf("Pre Increment = %d \n",++num); //21
	printf("Post Increment = %d \n",num++); //21
	printf("After Post Increment = %d \n",num); //22
	printf("====================================\n");
	printf("Pre decrement = %d \n",--num);//21
	printf("Post Decrement = %d \n",num--); //21
	printf("After Post Decrement = %d \n",num); //20

	
	
	return 0;
}
