//202510111229
//1438199079@qq.com
// 罗忠航
#include <stdio.h>
void swap (int *a,int *b)
{
  int temp=*a;*a=*b;*b=temp;
}
int main ()
{
  int x,y;scanf ("% d % d",&x,&y);
  swap (&x,&y);
  printf ("% d % d",x,y);
  return 0;
}
