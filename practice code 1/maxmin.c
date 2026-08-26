#include<stdio.h>
void findminmax(int arr[],int n,int *min,int *max)
{
    int *temp;
    *max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>*max)
        {
        	*temp=arr[i];
        	arr[i]=*max;
        	*max=*temp;
        }
    }
    
    *min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<*min)
        {
        	*temp=arr[i];
        	arr[i]=*min;
        	*min=*temp;
        }
    }
}
int main()
{
    int max=0,min=0,n;
    printf("Enter the size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    findminmax(arr,n,&min,&max);
    printf("MAX:%d\n",max);
    printf("MIN:%d\n",min);     
    return 0;
}   
