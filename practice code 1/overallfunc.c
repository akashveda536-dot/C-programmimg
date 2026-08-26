#include<stdio.h>
struct sensor
{
    int id;
    char name[20];
    float reading;
};
void inputsensor(struct sensor s[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Enter the id:");
        scanf("%d",&s[i].id);
        printf("Enter the name:");
        scanf("%s",s[i].name);
        printf("Enter the reading:");
        scanf("%f",&s[i].reading);
    }
}
void findhighest(struct sensor s[],int n)
{
    int maxindex=0;
    for(int i=0;i<n;i++ )
    if(s[i].reading>s[maxindex].reading)
    {
        maxindex=i;
    }
}
void displaysensor(struct sensor s[])
{
    int maxindex;
    printf("ID:%d\n",s[maxindex].id);
    printf("NAME:%s\n",s[maxindex].name);
    printf("READING:%.2f\n",s[maxindex].reading);
}
int main()
{
    int n;
    struct sensor s[20];
    printf("Enter the size:");
    scanf("%d",&n);
    inputsensor(s,n);
    findhighest(s,n);
    displaysensor(s);
    return 0;
}
