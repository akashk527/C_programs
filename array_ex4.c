#include<stdio.h>

int main(){
//	int arr[5] ={5,10,20,30,35};
//	int i;
//	printf("Array in reverse order : \n");
//	for(i=4;i>=0; i--){
//		printf(" %d",arr[i]);
//	}
int arr1[5] ={5,10,20,30,35};
int arr2[5];
int i;
for(i=0;i<5;i++){
	arr2[i] =arr1[i];
}
printf("Copied Array : ");
for(i=0; i<5; i++){
	printf(" %d",arr2[i]);
}
	
	return 0;
}
