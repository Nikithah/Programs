#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[100];
    int count=1;
    printf("Enter sentence: ");
    gets(str);
    int len=strlen(str);
    for(int i=0;str[i]!='\0';i++)
        if(str[i]==' ')
            count++;
    printf("No of words: %d",count);
}