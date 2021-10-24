#include <stdio.h>

void main()
{
    int num,a,b,sum=0;
    scanf("%d",&num);
    if(num == 0)
    sum = 1;
    else
    {
        while(num!=0)
        {
            a = num%10;
            sum = sum + (a+1);
            num = num/10;
        }
    }
    printf("%d\n",sum);
}