#include<stdio.h>
int main()
{
    int n,a[n],num,i,count=0,attempts=0;
    printf("enter the number of chits \n");
    scanf("%d",&n);
    printf("enter the numbers on chits \n ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the particular number to be picked \n");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(num==a[i])
        {
        count++;
        attempts=i+1;
        }
    }
    printf("no of duplicate chits %d\n",count);
    printf("no of attempts is %d",attempts);
    }