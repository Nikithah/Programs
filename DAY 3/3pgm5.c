#include<stdio.h>
int main()
{
    int n,temp=0,i;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("PIN: ");
    while(n>0)
    {
        i=n%10;
        if(i==9)
            temp=temp*10;
        else
            temp=temp*10+(i+1);
        n=n/10;
    }
    while(temp>0)
    {   
        i=temp%10;
        printf("%d",i);
        temp=temp/10;
    }
    return 0;
}
//alternate solution
#include<stdio.h>
int main()
{
    int code,acode,n,i;
    i=1;
    printf("enter the code\n");
    scanf("%d",&code);
    acode=0;
    while(code>0)
    {
        n=code%10;
        code=code/10;
        if(n==9)
            acode=acode+0;
        else
            acode=acode+(n+1)*i;
        i=i*10;
    }
    printf("actual code %d",acode);
}