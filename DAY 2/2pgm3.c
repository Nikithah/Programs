//program 3 
#include <stdio.h>
#include <stdlib.h>
void main()
{
    float a,b,c;
    char op;
    printf("Enter the expression(a+b)\n");
    scanf("%f %c %f",&a,&op,&b);     
    switch(op)
    {
        case '+':
        c = a+b;
        printf("Sum = %f",c);
        break;

        case '-':
        c = a-b;
        printf("Difference = %f",c);
        break;

        case '/':
        if (b==0)
        {
            printf("Denominator cannot be zero\n");
            exit(0);
        }
        else
        c = a/b;
        printf("Quotient = %f",c);
        break;

        case '*':
        c = a*b;
        printf("Product = %f",c);
        break;

        default:
        printf("Enter valid operation\n");
        break;
        
    }

}