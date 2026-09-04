#include<stdio.h>
void test(int *num)
{
    *num=*num+5;
}
int main()
{
    static int num=10;
    printf("NUMBER BEFORE:\t%d\n",num);
    test(&num);
    printf("NUMBER  AFTER:\t%d\n",num);
    return 0;
}
