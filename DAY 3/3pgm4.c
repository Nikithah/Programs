#include<stdio.h>
int main()
{
    int n,temp,i;
    printf("Enter n: ");
    scanf("%d",&n);
    temp=n;
    printf("digits extracted: ");
    while(n>0)
    {
        i=n%10;
        if(i)
            printf("%d,",i);
        n=n/10;
    }
    return 0;
}