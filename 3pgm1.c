#include <stdio.h>
int main()
{
   int n,c,rem=0,f=0,rev;
   printf("Enter any Number : ");
   scanf("%d",&c);
   n=c;
   printf("Individual digits are\n");
   while(n>0)
   {
       rem=n%10;
        f++;
       printf("%d ",rem);
       n/=10;
       
    }
   printf("\nCount of digits is %d",f);
   printf("\nReverse of %d is : ",c);
   while(c>0)
   {
    rev=c%10;
    printf("%d",rev);
    c/=10;
    }
   return 0;
}