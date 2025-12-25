#include<stdio.h>

	struct employeeS{
		int id_no;
		char name[10];
		char designation[12];
		int salary;
	};
	union employeeU{
		int id_no;
		char name[10];
		char designation[12];
		int salary;
	};


int main()
{
	struct employeeS e1;
	printf("Size of Struct = %d \n",sizeof(e1));
	union employeeU e2;
	printf("Size of Union = %d \n",sizeof(e2));
	return 0;
}
