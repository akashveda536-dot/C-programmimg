#include<stdio.h>
extern int z;
void print();
int main()
{
	print();
}
void print()
{
	printf("EXTERN VALUE:%d\n",z);
}

