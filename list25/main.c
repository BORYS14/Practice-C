//1036 两个测试点没过
#include <stdio.h>

int main(void) {
    int n;
    char str;

    do {
        scanf("%d %c",&n,&str);
    } while (n < 3 || n > 20);

    for (int i = 0; i < (int)(n/2+0.5); i++) {
        if (i == 0 || i == (int)(n/2+0.5) - 1) {
            for (int j = 0; j < n; j++) {
                printf("%c",str);
            }
        } else {
            for (int j = 0; j < n; j++) {
                if (j == 0 || j == n - 1) printf("%c",str);
                else putchar(' ');
            }
        }
        putchar('\n');
    }

    return 0;
}   