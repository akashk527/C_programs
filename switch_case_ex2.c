//menu drive program
#include<stdio.h>
int main(){
	int a,b,choice;
	char cont;
	
	do{
		printf("========Calculator Menu============ \n");
		printf("1.Addition (+) \n");
		printf("2.Substraction (-) \n");
		printf("3.Multipication (*) \n");
		printf("4.Division (/) \n");
		printf("0. Exit \n");
		
		printf("Enter your Choice : ");
		scanf("%d",&choice);
		
		if(choice != 0 && choice <=4){
			printf("Enter First NUmber :");
			scanf("%d",&a);
			printf("Enter second NUmber :");
			scanf("%d",&b);
			
		}
		
		switch(choice){
			case 1 : printf("Sum = %d \n",a+b);
			break;
			case 2 : printf("sum = %d ",a-b);
			break;
			case 3: printf("sum = %d ", a*b);
			break;
			case 4: printf("sum = %d ",a/b);
			break;
			case 0 : printf("Calculator Exiting... bye bye");
			break;
			default: printf("Invalid choice \n");
		}
		if(choice != 0){
			printf("Do you want to perfrom another operation :");
			scanf(" %c",&cont);
		}else{
			cont = 'n';
		}
	}while(cont == 'y' || cont == 'Y');
	
	return 0;
}
