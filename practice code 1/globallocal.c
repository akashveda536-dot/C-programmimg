#include<stdio.h>
void test()
{
    int x=10;
    {
        int x=20;
        printf("Enter the local value:%d\n",x);
    }
    printf("Enter the global value:%d\n",x);
}
int main()
{
    test();
    return 0;
}
