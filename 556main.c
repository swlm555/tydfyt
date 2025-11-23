//202510111229
//1438199079@qq.com
// 罗忠航
#include <stdio.h>
#include <stdlib.h>
int main ()
{
  int p=(int)
  malloc(5sizeof(int));
for(int i=0;i<5;i++){
scanf("%d",p+i);
}
for(int i=0;i<5;i++)
{
printf("%d ",(p+i));
}
free(p);
p=NULL;
return 0;
}
