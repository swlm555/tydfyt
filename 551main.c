//202510111229
//1438199079@qq.com
// 罗忠航
#include <stdio.h>
int main ()
{
int a;
scanf ("% d",&a);
int *p=&a;
*p+=10;
printf ("% d,% d",a,*p);
return 0；
}
