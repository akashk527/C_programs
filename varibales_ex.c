#include<stdio.h>

int main(){
	
	//interger types
	
	int i =10;
	short int si=5;
	long int li= 120007;
	unsigned int ui = 20;
	
	// character type
	 char c='A';
	 
	 //floting point type
	 float f= 3.14;
	 double d = 3.134444477777;
	 long double ld = 3.56678907766554;	
	 
	 printf("--------interger types-------------\n");
	 printf("int : value = %d , size = %zu byte \n",i,sizeof(i));
	 printf("short int : value = %d , size = %zu byte \n",si,sizeof(si));
	 printf("long int : value = %ld , size = %zu byte \n",li,sizeof(li));
	 printf("unsigned int : value = %u , size = %zu byte \n",ui,sizeof(ui));
	 printf("long int : value = %d , size = %zu byte \n",li,sizeof(li));
	 
	 printf("--------character types-------------\n");
	 printf("char : value = %c , size = %zu byte \n",c,sizeof(c));
	 
	 printf("-------floating points----------\n");
	 printf("float : value = %f , size = %zu byte \n",f,sizeof(f));
	 printf("double : value = %lf , size = %zu byte \n",d, sizeof(d));
	 printf("long double : value = %Lf , size = %zu byte \n",ld, sizeof(ld));
	 
	
	
	return 0;
}
