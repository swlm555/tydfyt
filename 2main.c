//202510111229
//1438199079@qq.com
//罗忠航
#include <stdio.h>
int main() {
    int num, a, b, c;
    int count = 0; 
    for (num = 100; num <= 999; num++) {
        a = num / 100;          
        b = (num / 10) % 10;    
        c = num % 10;           
        
        // 判断是否为水仙花数
        if (a*a*a + b*b*b + c*c*c == num) {
            if (count > 0) printf(" "); 
            printf("%d", num);
            count++;
        }
    }
    printf("\n");
    return 0;
}
