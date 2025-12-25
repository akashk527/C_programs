#include<stdio.h>
  
  union data{
  	int i;
  	float fl;
  	char c;
  };


int main(){
	
	union data d;
	d.i=10;
	printf("Integer = %d \n",d.i);
	d.fl=42.6;
	printf("float = %.2f \n",d.fl);
	d.c='A';
	printf("Char = %c \n",d.c);
	
	return 0;
}
