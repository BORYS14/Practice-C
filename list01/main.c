#include <stdio.h>

int main(void)
{
    int a,b,c;

    printf("请输入三个实数："); scanf("%d%d%d",&a,&b,&c);
    
    if (a + b > c && a - b < c) {
        if (a == b && b == c) {
            printf("1");
        } else if ((a == b && b != c) || (a == c && b !=c) || (b == c && a != b)) {
            printf("2");
        } else {
            printf("3");
        }
    } else {
        printf("0");
    }
    
    return 0;
}