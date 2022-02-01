#include<stdio.h>
#include<stdlib.h>

struct abc
{

//	char name[100];
	int a;
	char b;
	double c;
}c;

int main()
{
	struct abc ;
	printf("Size of a is:%d\n",sizeof(c));
	return 0;
}

