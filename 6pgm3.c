#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[100],temp[100];
    printf("Enter sentence: ");
    int i=0;
    gets(str);
    int len=strlen(str);
    printf("%c",str[i]);
    for(i=1;str[i]!='\0';i++)
        if(str[i]==' ')
            printf("%c",str[i+1]);
            
}