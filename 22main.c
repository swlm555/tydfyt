#include <stdio.h>
int arith_sum(int a1,int an,int step)
{
    int n=(an-a1)/step +1;
    return n*(a1+an)/2;
}
int main()
{
    printf("%d",arith_sum(1,100,1));
    return 0;
}
