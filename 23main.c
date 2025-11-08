#include <stdio.h>
int sum_arr(int arr[],int len)
{
    int s=0,i;
    for(i=0;i<len;i++)
        s+=arr[i];
    return s;
}
int product_arr(int arr[],int len)
{
    int p=1,i;
    for(i=0;i<len;i++)
        p*=arr[i];
    return p;
}
int main()
{
    int a[5],i;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("%d %d",sum_arr(a,5),product_arr(a,5));
    return 0;
}
