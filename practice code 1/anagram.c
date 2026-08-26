#include<stdio.h>
#include<string.h>
int isanagram(char str1[],char str2[],int count1[],int count2[])
{
    for(int i=0;str1[i]!='\0';i++)
    {
        count1[str1[i]-'a']++;
    }
    for(int i=0;str2[i]!='\0';i++)
    {
        count2[str2[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(count1[i]!=count2[i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int count1[26]={0};
    int count2[26]={0};
    char str1[20];
    int ana;
    printf("Enter the string 1:");
    scanf("%s",str1);
    char str2[20];
    printf("Enter the string 2:");
    scanf("%s",str2);
    if(strlen(str1)!=strlen(str2))
    {
        printf("NOT ANAGRAM");
    }
    ana=isanagram(str1,str2,count1,count2);
    if(ana==1)
    {
        printf("ANAGRAM\n");
    }
    else
    {
        printf("NOT ANAGRAM\n");
    }
    return 0;
}
