#include<stdio.h>
void test()
    {
        int x=0;
        x++;
        printf("normal variable:%d\n",x);
    }
void counter()
    {
        static int x=0;
        x++;
        printf("static variable:%d\n",x);
    }
int main()
{
    test();
    test();
    test();
    test();
    printf("\nusing the static\n\n");
    counter();
    counter();
    counter();
    counter();
    return 0;
}
