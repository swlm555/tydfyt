#include <stdio.h>
int power(int a,int b)
{
    int res=1,i;
    for(i=0;i<b;i++)
        res*=a;
    return res;
}
int main()
{
    int sum=0;
    sum=power(1,2)+power(2,2)+power(3,2)+power(4,2)+power(5,2);
    printf("%d",sum);
    return 0;
}
