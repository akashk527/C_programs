//Appending to file
#include<stdio.h>

int main(){
	FILE *fp;
	fp= fopen("C:\\2612\\akash_write102.txt","a");
	if(fp == NULL){
		printf("Eroor opening file... \n");
		return 1;
	}
	fprintf(fp,"This line is Appended at END \n");
	fprintf(fp,"This 2nd line is Appended at END \n");
	fclose(fp);
	printf("Appending successfully..");
	
	return 0;
}
