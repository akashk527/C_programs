//with parameter with return

#include<stdio.h>

int square(int num){
	return num*num;
}


int main(){
	
	int result = square(10);
	printf("Square = %d \n ",result);
	
	return 0;
}

