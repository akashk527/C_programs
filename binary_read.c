#include<stdio.h>
int main(){
	FILE *fp;
	int num[5];
	fp = fopen("C:\\2612\\numberss1.bin", "rb");
	 if (fp == NULL) {
        printf("Error opening file...\n");
        return 1;
    }
	fread(num,sizeof(int),5,fp);
	fclose(fp);
	int i;
	for(i=0; i<5; i++){
		printf("%d ", num[i]);
	}
	printf("\n");
	return 0;
}
