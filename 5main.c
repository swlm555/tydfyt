//202510111229
//1438199079@qq.com
//罗忠航
#include <stdio.h>
int main() {
    int arr[5]; 
    int i, sum = 0;
    
    // 输入前4位元素
    for (i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }
    
    arr[4] = sum; // 
    
  
    for (i = 0; i < 5; i++) {
        if (i > 0) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}
