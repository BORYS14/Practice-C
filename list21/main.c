#include <stdio.h>

int main(void) {
    char A[1000];
    int B;
    int R = 0, Q = 0;
    int state = 0;

    do {
        scanf("%s%d",A,&B);
    } while (B < 1 || B > 9);

    for (int i = 0; A[i] != '\0'; i++) {
        Q = (A[i]-'0'+R*10) / B;
        R = (A[i]-'0'+R*10) % B;
        if (Q == 0 && state == 0) {
            state == 1;
        } else {
            printf("%d",Q);
            state ++;
        }
    }
    
    if (Q == 0 && state == 0) printf("0");

    printf(" %d",R);
    
    return 0;
}