#include<stdio.h>
int main()
{
    int arr[15]={2,6,10,14,18,10,3,7,11,15,19,3,7,10,14};
    int len=sizeof(arr)/sizeof(arr[0]);
    int i,j;
    for(i=0;i<len;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            break;
        }
        if(i==j)
            printf("%d ",arr[i]);
    }
    return 0;
}