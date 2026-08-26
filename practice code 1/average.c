#include<stdio.h>
int calculateaverage(int arr[],int n,int sum)
{
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    float average=sum/n;
    return average;
}
int main()
{
    int n,sum=0;
    float average;
    printf("Enter the size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    average=calculateaverage(arr,n,sum);
    printf("AVERAGE:%.2f",average);
    return 0;
}
