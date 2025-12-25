#include<stdio.h>
//structure is  a User fefined data type - allows you to store multiple variable od different data type under one name

//struct structure_name{
//	data_type member1;
//	data_type member2;
//	data_type member3;
//	
//};
struct student{
	int roll;
	float marks;
	char grade;
};
int main(){
	struct student s1;
	struct student s2;
	s1.roll =101;
	s1.marks = 56.77;
	s1.grade = 'A';
	
  printf("-----Student s1 details-----\n");
  printf("Roll no = %d \n",s1.roll);
  printf("Marks = %.2f \n",s1.marks);
  printf("Grade = %c \n",s1.grade);
  
    s2.roll =102;
	s2.marks = 80.77;
	s2.grade = 'c';
  
  printf("-----Student s2 details-----\n");
  printf("Roll no = %d \n",s2.roll);
  printf("Marks = %.2f \n",s2.marks);
  printf("Grade = %c \n",s2.grade);
	
	return 0;
}
