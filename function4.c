#include<stdio.h>
#define PI 3.146

float areaOfCircle(){
	float radius = 7;
	return PI * radius * radius;
}

int main(){
	printf("Area  of circle = %.2f \n",areaOfCircle());
	
	return 0;
}
