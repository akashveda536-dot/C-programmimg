#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size:");
	scanf("%d",&n);
	int arr[15];
	int *p;
	printf("Enter the array:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	p=&arr[0];
	printf("ARRAY PRINTED THROUGH POINTER ARITHMETIC\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",*p);
		p++;
	}
	return 0;
}


