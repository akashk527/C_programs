//user input Write
#include<stdio.h>
 int main(){
 	FILE *fp;
 	char name[50];
 	int age;
 	float marks;
 	
 	fp = fopen("C:\\2612\\akash_write103.txt","w");
 		if(fp == NULL){
		printf("Eroor opening file... \n");
		return 1;
	}
	printf("Enter Student Name :");
	scanf("%s",name);
	
	printf("Enter Student Age :");
	scanf("%d",&age);
	
	printf("Enter Student Marks :");
	scanf("%f",&marks);
 	
 	fprintf(fp,"name : %s \n Age : %d \n Marks : %.2f \n",name,age,marks);
 	fclose(fp);
 	printf("Data Written successfully to file...");
 	return 0;
 }
