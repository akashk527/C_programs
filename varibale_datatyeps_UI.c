#include<stdio.h>

int main(){
	int age;
	float marks;
	char grade;
	char name[20];
	
	//Taking user Inputs
	printf("Enter your age : ");
	scanf("%d",&age);
	printf("Enter your marks : ");
	scanf("%f",&marks);
	
	printf("Enter your grade  : ");
	scanf(" %c",&grade); ///space before %c
	printf("Enter your name : ");
	scanf("%s", name);
	
	//display output
	printf("----student details------\n");
	printf("Age is : %d \n",age);
	printf("Marks is : %f \n",marks);
	printf("Grade is : %c \n",grade);
	printf("Name is : %s \n",name);
	
	
	return 0;
}
