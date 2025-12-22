#include<stdio.h>
int main(){
	int arr[5] ={34,12,67,21,12};
	int max = arr[0];
	int i;
	
	 for(i = 1; i < 5; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    printf("Maximum number is: %d", max);

	
	return 0;
}
