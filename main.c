//202510111229
//1438199079@qq.com
//罗忠航
#include <stdio.h>
int main() {
    int n, i, is_prime = 1; 
    scanf("%d", &n);
    for (i = 2; i < n; i++) {
        if (n % i == 0) { 
            is_prime = 0;
            break; // 
        }
    }
    if (n == 1) is_prime = 0;
    if (is_prime) {
        printf("密钥安全，密码设置成功\n");
    } else {
        printf("密钥不安全，请重新输入\n");
    }
    return 0;
}
