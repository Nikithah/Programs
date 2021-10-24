//program 1
#include<stdio.h>
int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d",&age);
    if(age<18)
    printf("Not eligible to vote");
    else
    printf("Eligible to vote");
    return 0;
}

//program1 with ternary operator

#include<stdio.h>
void main()
{
    int age;
    printf("Enter age: ");
    scanf("%d",&age);
    int res=(age<18)?1:0;
    if(res)
    printf("Not eligible to vote");
    else
    printf("Eligible to vote");
}

