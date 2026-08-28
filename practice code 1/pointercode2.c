#include<stdio.h>
int main()
{
	int a=67;
	int *p=&a;
	char *x=(char *)p;
	printf("%c",*x);
	return 0;
}

