//1011
#include <stdio.h>

int main(void) {
    int T;
    long a,b,c;
    scanf("%d",T);

    for (int i = 1; i <= T; i++) {
        scanf("%ld%ld%ld",&a,&b,&c);
        if (a + b > c) printf("Case #%d: true\n",i);
        else printf("Case #%d: false\n",i);
    }

    return 0;
}