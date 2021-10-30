//1016
#include <stdio.h>

int count(char A[], int D) {
    int P = 0;

    for (int i = 0; A[i] != '\0'; i++) {
        if (A[i] - '0' == D) P = P*10 + D;
    }
    
    return P;
}

int main(void) {
    char A[11];
    char B[11];
    int D1,D2,P1,P2;

    scanf("%s%d%s%d",A,&D1,B,&D2);

    P1 = count(A,D1);
    P2 = count(B,D2);

    printf("%d",P1+P2);

    return 0;
}