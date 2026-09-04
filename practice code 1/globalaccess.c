#include<stdio.h>
void test()
{
    int x=10;
    {
        printf("Enter the local value:%d\n",x);
    }
    printf("Enter the global value:%d\n",x);
}
int main()
{
    test();
    return 0;
}
