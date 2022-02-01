#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int nstudents=0;
struct student
{
	int RollNo;
	char Name[100];
	char Address[1000];
};
void printstructure(struct student *a)
{
	int i;
	for (i=0; i<nstudents;i++)
	{
	printf("\nRollNo: %d\n",(a+i)->RollNo);
	printf("Student Name: %s\n", (a+i)->Name);
	printf("Student Address: %s\n",(a+i)->Address);
	}
}

struct student *createDB()
{
	int i;
	struct student *a;

	printf("Enter No.of students: \t");
	scanf("%d",&nstudents);
	a = (struct student*)malloc(sizeof(struct student)*nstudents); 
	for(i=0; i<nstudents;i++)
	{
		printf("Enter Student Deatils: \n");
		printf("Enter Student RollNo: \t");
		scanf("%d",&((a+i)->RollNo));
		printf("Enter Student Name: \t");
		scanf("%s",((a+i)->Name));
		printf("Enter Student Address: \t");
		scanf("%s",((a+i)->Address));
	}
	return a;
}
int main()
{	
	struct student *s1;
	s1 = createDB();
	printstructure (s1);
	free (s1);
	return 0;
}

