#include<stdio.h>
//function without parameter and without return

void msg(){
	printf(" \nHello  Welcome to C programing \n");
}
void printstar(){
	printf(" \n*************************************\n");
}
void todayMenu(){
	printf("1.Pizza \n");
	printf("2.Burger \n");
	printf("3.Sandwitch \n");
}
void tomoMenu(){
	printf("1.ukdiche modak \n");
	printf("2.Fish \n");
	printf("3.dosa \n");
}

int main(){
	printstar();
	todayMenu();
	printstar();
	tomoMenu();
	printstar();
	
	   
	return 0;
}
