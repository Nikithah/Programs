#include <stdio.h>
int main()
{
    float a[6];
    printf("Enter salaries on weekdays : ");
    for(int i=0;i<6;i++)
        scanf("%f",&a[i]);
    float big=0;
    int j=0;
    for(int i=0;i<6;i++)
    {
        if(a[i]>big)
        {   
            big=a[i];
            j=i;
        }
    }
    switch(j+1)
    {
        case 1: printf("Highest pay on Monday");break;
        case 2: printf("Highest pay on Tuesday");break;
        case 3: printf("Highest pay on Wednesday");break;
        case 4: printf("Highest pay on Thursday");break;
        case 5: printf("Highest pay on Friday");break;
        case 6: printf("Highest pay on Saturday");break;
    }
}