//202510111229
//1438199079@qq.com
//罗忠航
#include <stdio.h>
int main() {
    int n, i = 2, is_prime = 1;
    scanf("%d", &n);
    
    // 特殊情况：1不是质数
    if (n == 1) is_prime = 0;
    
    // While循环替代For循环，遍历2到n-1
    while (i < n && is_prime) {
        if (n % i == 0) {
            is_prime = 0;
        }
        i++; // 手动更新循环变量
    }
    
    // 输出结果
    if (is_prime) {
        printf("密钥安全，密码设置成功\n");
    } else {
        printf("密钥不安全，请重新输入\n");
    }
    return 0;
}
