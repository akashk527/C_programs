#include<stdio.h>

int main(){
	int restaurantOpen, foodAvailable, pyement;
	
	printf("Is restaurant Open (1-Yes , 0-No)");
	scanf("%d",&restaurantOpen);
	
	if(restaurantOpen== 1){
		printf("Is Your food Available (1-Yes , 0-No)");
		scanf("%d",&foodAvailable);
		if(foodAvailable==1){
			printf("Payment successful? (1-Yes , 0-No)");
			scanf("%d",&pyement);
			
			if(pyement==1){
				printf("Order confirmed..");
			}else{
				printf("Pyement faild..");
			}
		}else{
			printf("Food not Available");
		}
	}else{
		printf("Restaurant is Closed");
	}
	
	return 0;
}
