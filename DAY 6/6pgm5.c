#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char s1[10],s2[10];
    int i=0,n;
    printf("enter the string\n");
    scanf("%s",s1);
    n=strlen(s1);
    while(s1[i]!='\0')
    {
        s2[n-i-1]=s1[i];
        i++;
    }
    s2[i]='\0';
    printf("the reversed string is\n");
    puts(s2);
    i=0;
    while(s1[i]!='\0')
    {
        if(s1[i]!=s2[i])
        {
            printf("string is not palindrome");
            exit(0);
        }
        i++;
    }
    printf("string is palindrome");
}