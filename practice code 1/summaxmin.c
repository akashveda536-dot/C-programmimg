#include<stdio.h>
void calculate(int arr[], int n, int *sum, int *min, int *max)
{
    *max=arr[0];
    *min=arr[0];
    int temp;
    for(int i=0;i<n;i++)
    {
        *sum=*sum+arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>*max)
        {
            temp=arr[i];
            arr[i]=*max;
            *max=temp;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<*min)
        {
            temp=arr[i];
            arr[i]=*min;
            *min=temp;
        }
    }
    printf("SUM:%d\n",*sum);
    printf("MAX:%d\n",*max);
    printf("MIN:%d\n",*min);
}
int main()
{
    int n;
    int sum=0;
    int min,max;
    printf("Enter the size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    calculate(arr,n,&sum,&min,&max);
    return 0;
}
