//1007
#include <stdio.h>
#include <math.h>

int judge(int pri[],int n) {
    int res = 0;

    for (int i = 0; i < n - 1; i++) {
        if (pri[i+1] - pri[i] == 2) res++;
    }

    return res;
}

int main(void) {
    int N;
    int i,j,k;
    int n = 0;
    int pri[50000];

    scanf("%d",&N);
    for (i = 2; i <= N; i++) {
        k = (int)sqrt((double)i);
        for (j = 2; j <= k; j++) {
            if (i % j == 0) break;
        }
        if (j > k) {
            pri[n] = i;
            n++;
        }
    }
  
    printf("%d",judge(pri,n));

    return 0;
}