#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student
{
	int RollNo;
	char address[1000];
	char name[1000];
};
int main()
{
	struct student *s1;
	s1 = (struct student*)malloc(sizeof(struct student));
	s1->RollNo=1;
        strcpy(s1->name,"ABC");
        strcpy(s1->address,"New Delhi");

        printf("RollNo = %d\n",s1->RollNo);
        printf("name = %s\n",s1->name);
        printf("address = %s\n", s1->address);
        return 0;
}
