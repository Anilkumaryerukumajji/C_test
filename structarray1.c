#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
	int RollNo;
	char Name[100];
	char Address[1000];
};
void printstructure(struct student *a, int n)
{
	int i;
	for (i=0; i<n;i++)
	{
	printf("RollNo: %d\n",(a+i)->RollNo);
	printf("Student Name: %s\n", (a+i)->Name);
	printf("Student Address: %s\n",(a+i)->Address);
	}
}

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
		//fflush(stdin);
		//fgets((s1+i)->Address,sizeof((s1+i)->Address),stdin);
		scanf("%d",&((s1+i)->Address));
	}
	printstructure (s1,nstudents);
	free (s1);
	return 0;
}

