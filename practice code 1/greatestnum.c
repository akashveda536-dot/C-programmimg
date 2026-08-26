#include<stdio.h>
int largestnum(int a,int b,int c)
{
    if(a>b&&a>c)
    {
        return 2;
    }
    else if(b>a&&b>c)
    {
        return 1;
    }
    else if(c>a&&c>b)
    {
        return 0;
    }
}
int main()
{
    int a,b,c;
    int max;
    printf("Enter the number A/B/C:");
    scanf("%d%d%d",&a,&b,&c);
    max=largestnum(a,b,c);
    if(max==2)
    {
        printf("A IS GREATER");
    }
    else if(max==1)
    {
        printf("B IS GREATER");
    }
    else if(max==0)
    {
        printf("C IS GREATER");
    }
    return 0;
} 
