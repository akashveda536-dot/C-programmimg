#include<stdio.h>
int test(int num)
{
    num=num+5;
    return num;
}
int main()
{
    static int num=10;
    int var;
    printf("NUMBER BEFORE:\t%d\n",num);
    var=test(num);
    printf("NUMBER  AFTER:\t%d\n",var);
    return 0;
}

