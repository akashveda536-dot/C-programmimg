#include<stdio.h>
int checkevenodd(int n)
{
      if(n%2==0)
      {
          return 1;
      }
      else
      {
          return 0;
      }
}
int main()
{
    int n;
    int evod;
    printf("Enter the number:");
    scanf("%d",&n);
    evod=checkevenodd(n);
    if(evod==1)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}
