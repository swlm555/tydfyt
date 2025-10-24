//1438199079@qq.com
//202510111229
//罗忠航
#include <stdio.h>

int main() {
    float celsius, fahrenheit；
    printf("请输入摄氏温度：");
    scanf("%f", &celsius);
    fahrenheit = celsius * 9.0 / 5.0 + 32;
    printf("%.1f\n", fahrenheit);
    return 0;
}
