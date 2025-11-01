//202510111229
//1438199079@qq.com
//罗忠航
#include <stdio.h>
int main() {
    int num = 100, a, b, c;
    int count = 0;
    while (num <= 999) {
        a = num / 100;
        b = (num / 10) % 10;
        c = num % 10;
        
        if (a*a*a + b*b*b + c*c*c == num) {
            if (count > 0) printf(" ");
            printf("%d", num);
            count++;
        }
        num++; 
    }
    printf("\n");
    return 0;
}
