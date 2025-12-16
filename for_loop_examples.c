#include<stdio.h>

int main(){
	int i,j;
	 //print no 1 to 10
	 for(i=1; i<=10;i++){
	 	printf("%d \n",i);
	 }
	 
	 // multplication of 5
	 printf("=================================\n");
	 for(i=1; i<=10; i++){
	 	printf(" 5 * %d = %d \n",i,5*i);
	 }
	 //print 10 to 0
	 printf("=================================\n");
	 for(i=10; i>=0; i--){
	 	printf("%d \n",i);
	 }
	 //skiping no 0 to 20
	 printf("=================================\n");
	 for(i=0; i<=20; i+=2){
	 	printf("%d \n",i);
	 }
	 //multiple varibale
	 printf("=================================\n");
	 for(i=1,j=5; i<=5; i++,j--){
	 	printf(" i=%d , j=%d \n",i,j);
	 }
	 printf("=================================\n");
	 int sum;
	 for(i=1; i<=5; i++){
	 	sum=sum+i;
	 }
	 printf("Sum= %d",sum);
	
	return 0;
}
