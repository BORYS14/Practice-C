#include <stdio.h>

int main(void)
{
    int a,b,c;

    printf("请输入两个正整数：");
    scanf("%d%d",&a,&b);

    c = a;
    a = a > b ? a : b;
    b = c < b ? c : b;

    if (a%b != 0) {
        while (1) {
            a%=b;
            if (a == 0) {
                printf("最大公因数为：%d",b);
                break;
            }
            b%=a;
            if (b == 0) {
                printf("最大公因数为：%d",a);
                break;
            }
        }
    } else if (a%b == 0) {
        printf("最大公因数为：%d",b);  
    }

    return 0;
}