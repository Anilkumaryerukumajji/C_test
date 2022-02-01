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
	int i,nstudents;
	struct student *s1;

	printf("Enter No.of students: \t");
	scanf("%d",&nstudents);
	s1 = (struct student*)malloc(sizeof(struct student)*nstudents); 
	for(i=0; i<nstudents;i++)
	{
	printf("Enter Student Deatils: \n");
	printf("Enter Student RollNo: \t");
	scanf("%d",&((s1+i)->RollNo));
	
	printf("Enter Student Name: \t");
	scanf("%s",((s1+i)->Name));
	
	printf("Enter Student Address: \t");
	scanf("%s",((s1+i)->Address));
	}
	for (i=0; i<nstudents;i++)
	{
	printf("RollNo: %d\n",(s1+i)->RollNo);
	printf("Student Name: %s\n", (s1+i)->Name);
	printf("Student Address: %s\n",(s1+i)->Address);
	}
	return 0;
}

