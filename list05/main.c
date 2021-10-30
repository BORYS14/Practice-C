#include <stdio.h>

int main(void)
{
    int i,j;
    int z = 0; 

    for (i = 3; i <= 100; i++) {
        for (j = 2; j < i; j++) {
            if (i%j == 0) {
                printf("%5d",i);
                z++;
                if (z%5 == 0) {
                    putchar('\n');
                }
                break;
            }
        }
    }

    return 0;
}

//打印1～100非素数
