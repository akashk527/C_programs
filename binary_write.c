//binary write

#include<stdio.h>

int main(){
	FILE *fp;
	int num[] = {10,20,30,40,50};
	
	 fp = fopen("C:\\2612\\numberss1.bin", "wb");
	 if (fp == NULL) {
        printf("Error opening file...\n");
        return 1;
    }
    fwrite(num,sizeof(int),5,fp);
    fclose(fp);
    printf("Binary Data Return Successfully..");
    
	return 0;
}
