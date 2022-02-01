#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
	int RollNo;
	char Name[100];
	char Address[1000];
};

int main()
{
	struct student *s1;
	s1 = (struct student*)malloc(sizeof(struct student)); 
	
	printf("Enter Student Deatils: \n");
	printf("Enter Student RollNo: \t");
	scanf("%d",&(s1->RollNo));
	
	printf("Enter Student Name: \t");
	scanf("%s",(s1->Name));
	
	printf("Enter Student Address: \t");
	scanf("%s",(s1->Address));
	
	printf("RollNo: %d\n",s1->RollNo);
	printf("Student Name: %s\n", s1->Name);
	printf("Student Address: %s\n",s1->Address);
	return 0;
}

