//writing to file

#include<stdio.h>

int main(){
	FILE *fp;
	fp = fopen("C:\\2612\\akash_write102.txt","w");
	if(fp == NULL){
		printf("Eroor opening file... \n");
		return 1;
	}
	fprintf(fp,"Hello , Its File Handling \n");
	fprintf(fp,"Hello , Its File Handling 2nd line \n");
	fclose(fp);
	printf("Data Written  successfully");
	
	return 0;
}
