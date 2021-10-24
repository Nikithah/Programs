#include <stdio.h>
int main()
{
    int a[6],i;
    float b[6];
    char c[6]={'M','T','W','T','F','S'};
       
    printf("Enter the wages of Mr.Int\n");
    for(i=0; i<6; i++)
        scanf("%d",&a[i]); 

    printf("Enter the wages of Mr.Float\n");
    for(i=0; i<6; i++)
        scanf("%f",&b[i]); 
    
    for(i=0; i<6; i++)
        printf("The wages of Mr.Int and Mr.Float on %c is ₹ %d and ₹ %.2f\n",c[i],a[i],b[i]); 
       
    return 0;
}