#include<stdio.h>

//nested loop
//int main(){
//	int i,j;
//	
//	for(i = 1; i<=5; i++){
//		for(j =1; j<=i; j++){
//			printf(" %d ",j);
//		}
//		printf("\n");
//	}
// 1
// 1  2
// 1  2  3
// 1  2  3  4
// 1  2  3  4  5
//	return 0;
//}

//int main(){
//	int i,j;
//	
//	for(i = 1; i<=3; i++){
//		for(j =1; j<=3; j++){
//			printf(" %d ",j*i);
//		}
//		printf("\n");
//	}
// 1  2  3
// 2  4  6
// 3  6  9
	//return 0;
//}

//int main(){
//	int i,j;
//	
//	for(i = 5; i>=1; i--){
//		for(j =1; j<=i; j++){
//			printf(" * ",j*i);
//		}
//		printf("\n");
//	}
// *  *  *  *  *
// *  *  *  *
// *  *  *
// *  *
// *

	//return 0;
//}

//int main(){
//	int i,j;
//	
//	for(i = 1; i<=4; i++){
//		for(j =1; j<=i; j++){
//			printf(" %d ",i);
//		}
//		printf("\n");
//	}
// 1
// 2  2
// 3  3  3
// 4  4  4  4
	//return 0;
//}

int main(){
	int i,j;
	int num=1;
	
	for(i = 1; i<=4; i++){
		for(j =1; j<=i; j++){
			printf(" %d ",num);
			num++;
		}
		printf("\n");
	}
	return 0;
}
