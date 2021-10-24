//For 2 numbers
#include<stdio.h> 
int main() 
{
    int a, b, largest; 
    printf("Enter two numbers\n"); 
    scanf("%d%d",&a,&b); 
    largest=(a>b)?a:b; 
    printf("The largest number is %d",largest); 
    return(0); 
}

//For 3 numbers
#include<stdio.h> 
int main() 
{
int a, b, c, largest ; 
printf("Enter three numbers\n") ; 
scanf("%d%d%d", &a, &b, &c) ; 
largest = a > b ? (a > c ? a : c) : (b > c ? b : c) ; 
printf("The largest number is %d", largest) ; 
return(0); 
}