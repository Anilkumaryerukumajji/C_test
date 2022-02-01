#include<stdio.h>

union abc
{
	int a:4;
	int as:7;
};

main ()
{
	union abc c;
	printf("%d\n",sizeof(as.c));
}
