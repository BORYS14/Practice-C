#include <stdio.h>

int main(void) {
    float wei;

    printf("请输入包裹的重量(kg)："); 
    do {
        scanf("%f",&wei);
    } while (wei < 0);

    if (wei <= 10) {
        printf("收取费用为：%.2f元\n",0.80*wei + 0.2);
    } else if (wei <= 20) {
        printf("收取费用为：%.2f元\n",0.75*wei + 0.2);
    } else if (wei <= 30) {
        printf("收取费用为：%.2f元\n",0.70*wei + 0.2);
    } else {
        printf("fail");
    }

    return 0;
}