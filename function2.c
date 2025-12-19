//function with parameter but no returns
#include<stdio.h>
int i;
void printTable(int num){
	for(i=1; i<=10; i++){
		printf("%d x %d = %d \n",num,i,num *i);
	}
}
void areaRectangle(int length, int width){
	printf("Area = %d", length * width);
}

int main()
{
	int l , w;
	printf("Enter length : ");
	scanf("%d",&l);
	printf("Enter width : ");
	scanf("%d",&w);
	
   areaRectangle(l,w);
	return 0;
}
