#include<stdio.h>
int main()
{
    int arr[]={2,6,10,14,18,3,7,11,15,19};
    int len=sizeof(arr)/sizeof(arr[0]);
    int temp[11]={2,6,10,14,18,3,7,11,15,19};
    temp[4]=22;
    for(int i=4;i<len;i++)
    {
        temp[i+1]=arr[i];
    }
    len=sizeof(temp)/sizeof(temp[0]);
    for(int i=0;i<len;i++)
        printf("%d ",temp[i]);
    return 0;
}