//1010 (部分正确)
#include <stdio.h>

int main(void) {
    int num[2000];
    int i = 0;
    int statement = 0;
    do {
        while (scanf("%d%d",&num[i],&num[i+1]) != EOF) i+=2;
        for (int j = 0; j < i; j++) {
            if (num[j] > 1000 || num[j] < -1000) statement = 1;
        } 
    } while (statement);

    for (int j = 0; j < i; j+=2) {
        if (num[j]*num[j+1]) {
            if (j == 0);
            else putchar(' ');
            printf("%d %d",num[j]*num[j+1],num[j+1]-1);
        }
    }

    return 0;
}


