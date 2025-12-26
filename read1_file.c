//reading from file
#include<stdio.h>

int main(){
	FILE *fp;

    char str[200];
	fp = fopen("C:\\2612\\akash_write102.txt","r");
	if(fp == NULL){
		printf("Eroor opening file... \n");
		return 1;
	}
	printf("File Content\n");
	while(fgets(str,sizeof(str),fp) !=NULL){
		printf("%s",str);
	}
	fclose(fp);
	
	return 0;
}
