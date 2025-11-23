//202510111229
//1438199079@qq.com
// 罗忠航
#include <stdio.h>
void moveArr (int *ptr_arr,int len)
{
  for (int i=len-1;i>0;i--)
  {
    (ptr_arr+i)=(ptr_arr+i-1);
  }
  *ptr_arr=0;
}
int main()
{
int arr[5];
int p=arr;
for(int i=0;i<5;i++){
scanf("%d",p+i);
}
moveArr(arr,5);
for(int i=0;i<5;i++){
printf("%d ",(p+i));
}
  return 0;
}
