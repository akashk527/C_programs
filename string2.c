#include <stdio.h>
#include<string.h>

int main(){
	//STRLEN
	char name[] ="AKASH";
	printf("Length = %d",strlen(name));
	
	// STRCPY
	char a[20] = "Hello";
	char b[20];
	strcpy(b,a);
	printf("\nCopied String = %s",b);
	
	//STRCAT
	char x[10]= "AKASH";
	char y[10]= " KACHARE";
	strcat(x,y);
	printf("\n%s",x);
	
	char str1[10] ="Welcome";
	char str2[10] =" to";
	char str3[10] = " pune";
	strcat(str1,str2);
	strcat(str1,str3);
	printf("\n%s",str1);
	
	//strcmp
	char s1[10] = "hello";
	char s2[10] = "Hello";
	if(strcasecmp(s1,s2)==0){
		printf("\nstring are equal");
	}else{
		printf("\nString Are not equal");
	}
	
	//strupr
	char str[] = "Hello its akash";
	strupr(str);
	printf("\n %s",str);
	
	//strlwr
	char strin[] = "Hello its akash";
	strlwr(strin);
	printf("\n %s",strin);
	
	//strrev
	char st[] = "programming";
	strrev(st);
	printf("\n%s",st);
	
	char string[]="Akash";
	int len = strlen(string);
	printf("First : %c \n",string[0]);
	printf("last : %c \n",string[len-1]);
	
	return 0;
}
