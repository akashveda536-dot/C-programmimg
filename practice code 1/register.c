#include<stdio.h>
void test()
{
    register int language=10;
    for(int i=0;i<language;i++)
    {
        printf("REGISTER VARIABLE:%d\n",i);
    }
}
int main()
{
    test();
    return 0;
}
