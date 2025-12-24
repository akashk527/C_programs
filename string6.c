#include <stdio.h>

int main() {
    char str[100],rev[20];

    printf("Enter a word: ");
    scanf("%s", str);
    
    strcpy(rev,str);
    
    strrev(rev);
    
    if(strcmp(str,rev)==0)
    	printf("Planidrom string");
    	else
    	printf(" Not Planidrom string");

    return 0;
}

