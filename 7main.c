//202510111229
//1438199079@qq.com
//罗忠航
#include <stdio.h>
int main() {
    int arr[5];
    int i;
    for (i = 1; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    arr[0] = 0;
    for (i = 0; i < 5; i++) {
        if (i > 0) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}
