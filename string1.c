#include<stdio.h>
int main(){
	char fullname[20];
	
//	printf("Entetr your Name :");
//	scanf("%s",name);
//	
//	printf("Your Name is = %s", name);
    
    printf("Enter Your Fullname : ");
    fgets(fullname,sizeof(fullname),stdin);
    
    printf("Full Name is : %s", fullname);
    
	return 0;
}
