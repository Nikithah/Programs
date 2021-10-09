#include<stdio.h>  
 int main()    
{    
int n,d,sum=0;    
printf("Enter a number\n");    
scanf("%d",&n);    
while(n>0)    
{    
d=n%10;    
sum+=d;    
n=n/10;    
}    
printf("the sum of digits is %d\n",sum);   

if(sum>10)
{
    d=sum%10;
    sum/=10;
    sum+=d;
   printf("(Single digit sum is %d)",sum); 
}

 return 0;  
}