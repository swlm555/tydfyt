//202510111229
//1438199079@qq.com
//罗忠航
#include <stdio.h>
int main() {
    int arr[5];
    int i, num;
    
 
    for (i = 0; i < 5; i++) {
        scanf("%d", &num); 
       
        while (num % 2 != 0) {
            scanf("%d", &num);
        }
        arr[i] = num;
  
    for (i = 0; i < 5; i++) {
        if (i > 0) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}
