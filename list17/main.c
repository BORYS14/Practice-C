//1012
#include <stdio.h>

int main(void) {
    int num[1000];
    int A1 = 0,A2 = 0,A3 = 0,A4 = 0,A5 = 0,A2j = 0;
    int N;
    int n = 1;
    int max = 0;
    float q = 0;
    
    scanf("%d",&N);
    for (int i = 0; i < N; i++ ) {
        scanf("%d",&num[i]);
    }

    for (int i = 0; i < N; i++) {
        if (num[i]%5==0 && num[i]%2==0) {
            A1+=num[i];
        } else if (num[i]%5==1) {
            A2j=1;
            A2+=n*num[i];
            n = -n;
        } else if (num[i]%5==2) { 
            A3++;
        } else if (num[i]%5==3) {
            A4+=num[i];
            q++;
        } else if (num[i]%5==4) {
            A5=1;
            max = (max > num[i]) ? max : num[i];
        }
    }

    if (A1 == 0) printf("N ");
    else printf("%d ",A1);
    if (A2j == 0) printf("N ");
    else printf("%d ",A2);
    if (A3 == 0) printf("N ");
    else printf("%d ",A3);
    if (A4 == 0) printf("N ");
    else printf("%.1f ",A4/q);
    if (A5 == 0) printf("N");
    else printf("%d",max);
    
    return 0;
}