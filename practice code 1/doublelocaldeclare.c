#include<stdio.h>
int globaln=400;
void test()
{
    int localn=100;
    {
        int locals=50;
        printf("LOCALS:%d\n",locals);
    }
    printf("LOCAL:%d\nGLOBAL:%d\n",localn,globaln);
}
int main()
{
    test();
    printf("GLOBAL MAIN:%d\n",globaln);
    return 0;
}
