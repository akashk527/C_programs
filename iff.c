#include<stdio.h>

int main(){
	
	//EXAMPLE 1
	int  age;
	printf("Enter Your Age : ");
	scanf("%d",&age);
	
	if(age>18){
		printf("You Can Vote for Election \n");
	}
	printf("PROCESS COMPLEITED");
	
	//EXAMPLE 2
	int battery =15;
	
	if(battery<20){
		printf("Low Battery, please charge \n");
	}
	printf("Process Completed");
	
	return 0;
}
