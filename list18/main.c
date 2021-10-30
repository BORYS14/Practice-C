//1013
#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool num[200000];
    int pri[10000];
    int n = 0;
    int M,N;
    int x;
    
    for (int i = 2; i < 200000; i++) num[i] = true; //埃氏筛选法
    for (int i = 2; i < 200000; i++) {
        if (num[i]) {
            for (int j = 2*i; j < 200000; j += i) {
                num[j] = false;
            }
        }
        if (num[i]) {
            pri[n++] = i;
        }
        if (n == 10000) break;
    }

    scanf("%d%d",&M,&N);
    for (; M <= N; M++) {
        printf("%d",pri[M-1]);
        x++;
        if (x % 10 == 0) {
            putchar('\n');
            continue;
        }
        if (M == N) break;
        putchar(' ');
    }

    return 0;
}
