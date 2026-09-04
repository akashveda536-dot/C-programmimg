#include<stdio.h>
int num=10;
void modify(int *num);
void display(int *num);
int main()
{
    modify(&num);
    display(&num);
    return 0;
}
void modify(int *num)
{
    *num+=5;
}
void display(int *num)
{
    printf("THE GLOBAL VARIABLE:%d\n",*num);
}

