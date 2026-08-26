#include<stdio.h>
#include<string.h>
int countvowels(char str[],int vowel)
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        vowel++;
    }
    return vowel;
}
int main()
{
    int count=0;
    int vowels;
    char str[20];
    printf("Enter the string:");
    scanf("%s",str);
    vowels=countvowels(str,count);
    printf("VOWELS:%d",vowels);
    return 0;
}
