#include<stdio.h>
struct student
{
    int rollno;
    float mark;
    char name[20];
};
int findtopper(struct student s[],int n)
{
    int maxindex=0;
    for(int i=0;i<n;i++)
    {
        if(s[i].mark>s[maxindex].mark)
        {
           maxindex=i;
        }
    }
    printf("topper details\n");
    printf("rollno:%d\n",s[maxindex].rollno);
    printf("name:%s\n",s[maxindex].name);
    printf("mark:%.2f\n",s[maxindex].mark);
    return 0;
}
int main()
{   
    int n;
    printf("Enter the size:");
    scanf("%d",&n);
    struct student s[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the rollno:");
        scanf("%d",&s[i].rollno);
        printf("Enter the name:");
        scanf("%s",s[i].name);
        printf("Enter the mark:");
        scanf("%f",&s[i].mark);
    }
    findtopper(s,n);
    return 0;
}
