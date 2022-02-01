#include<stdio.h>

struct abc
{
	int a;
	int b;
//	 a+b;
	struct abc *c;//self referential structures
};
main ()
{
	struct abc c;
	printf("%d\n",c);
}
