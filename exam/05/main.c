#include <stdio.h>

int main() {
    int n;
    int x = 0;

    printf("请输入一个整数："); scanf("%d",&n);

    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3*n+1;
        }
        x++;
    }

    printf("需要计算%d次。\n",x);

    return 0;
}