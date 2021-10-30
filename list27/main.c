//1038 程序正确但运行超时
#include <stdio.h>

int main(void) {
    int N;
    do {
        scanf("%d",&N);
    } while (N > 100000);

    int grade[N];
    for (int i = 0; i < N; i++) {
        scanf("%d",&grade[i]);
    }

    int n;
    scanf("%d",&n);
    int search[n];
    for (int i = 0; i < n; i++) {
        scanf("%d",&search[i]);
    }

    for (int i = 0; i < n; i++) {
        int x = 0;
        for (int j = 0; j < N; j++) {
            if (search[i]==grade[j]) x++;
        }
        printf("%d",x);
        if (i == n - 1) break;
        putchar(' ');
    }

    return 0;
}