#include<stdio.h>

enum color
{RED,BLUE,WHITE,Maroon=10};
int main()
{
	enum color c;
	c = RED;
	printf("My shirt color is:%d\n",c);
	printf("My shirt color is:%d\n",BLUE);
	printf("My shirt color is:%d\n",WHITE);
	printf("My shirt color is:%d\n",Maroon);
}
