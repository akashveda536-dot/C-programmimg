#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a,b;
    printf("Enter the variable a,b:");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a=%d\tb=%d",a,b);
    return 0;
}
