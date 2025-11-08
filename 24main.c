#include <stdio.h>
void reverse_arr(int arr[],int len)
{
    int i,t;
    for(i=0;i<len/2;i++)
    {
        t=arr[i];
        arr[i]=arr[len-1-i];
        arr[len-1-i]=t;
    }
}
int main()
{
    int a[5],i;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    reverse_arr(a,5);
    for(i=0;i<5;i++)
        printf("%d",a[i]);
    return 0;
}
