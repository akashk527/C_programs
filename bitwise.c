#include<stdio.h>

int main(){

   int a= 12 , b= 13;
   
   //left shift
   printf("a & b = %d \n",a & b);
   printf("a | b = %d \n",a | b);
   printf("a ^ b = %d \n",a ^ b);
   printf("a << 1 = %d \n",a << 1);
   printf("a << 2 = %d \n",a << 2);
   printf("a << 3 = %d \n",a << 3);
   printf("b << 1 = %d \n",b << 1);
   printf("b << 2 = %d \n",b << 2);
   printf("b << 1 = %d \n",b << 3);
   
   //right shift
   printf("===============================\n");
   printf("a >> 1 = %d \n",a >> 1);
   printf("a >> 2 = %d \n",a >> 2);
   printf("a >> 3 = %d \n",a >> 3);
   
    //not
    printf("==============================\n");
   printf("~a = %d\n" ,~a);
	return 0;
}
