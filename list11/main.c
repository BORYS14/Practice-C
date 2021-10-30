//1006
#include <stdio.h>

int main(void) {
    int num;
    do {
        scanf("%d",&num);
    } while (num < 0 || num > 999);

    int bit[3];
    int n;
    for (int i = 0; i < 3; i++) {
        bit[i] = num % 10;
        num /= 10;
    }
    
    for (int i = 2; i >= 0; i--) {
        if (i == 2) {
            for (int j = 0; j < bit[2]; j++) printf("B");
        } else if (i == 1) {
            for (int j = 0; j < bit[1]; j++) printf("S");
        } else {
            for (int j = 1; j <= bit[0]; j++) printf("%d",j);
        }
    }

    return 0;
}