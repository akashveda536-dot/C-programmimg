#include<stdio.h>
void test(int x);
int main()
{
    int x=10;
    test(x);
    return 0;
}
void test(int x)
{
    {
        printf("Enter the local value:%d\n",x);
    }
    printf("Enter the global value:%d\n",x);
}
