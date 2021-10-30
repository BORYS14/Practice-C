//1008
#include <stdio.h>

int main(void) {
    int N,M;
    int array[101];

    do {
        scanf("%d%d",&N,&M);
    } while (N < 1 || N > 100 || M < 0);
    M = M % N;

    for (int i = 0; i < N; i++) {
        scanf("%d",&array[i]);
    }

    int start = N - M;
    for (; start < N; start++) {
        printf("%d ",array[start]);
    }
    for (start = 0; start <  N - M; start++) {
        printf("%d",array[start]);     //printf("%d%c",array[start],start == N - M - 1 ? '/n' : ' ');
        if (start == N - M - 1) break;  
        putchar(' ');
    }

    return 0;
}