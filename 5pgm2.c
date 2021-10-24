#include<stdio.h>
int main()
{
    int arr[10]={2,6,10,14,18,3,7,11,15,19};
    int len=sizeof(arr)/sizeof(arr[0]);
    int i;
    for(i=5;i<len;i++)
        arr[i]=arr[i+1];
    for(i=0;i<len-1;i++)
        printf("%d ",arr[i]);
        
    return 0;
}