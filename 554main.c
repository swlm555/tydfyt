//202510111229
//1438199079@qq.com
// 罗忠航
#include <stdio.h>
void addOne (int *arr)
{
  for (int i=0;i<5;i++)
  {
    *(arr+i)++;
  }
}
int main ()
{
int arr [5];
int p=arr;
for(int i=0;i<5;i++){
scanf("%d",p+i);
}
addOne(arr);
for(int i=0;i<5;i++)
{
printf("%d ",(p+i));
}
}
return 0;
}
