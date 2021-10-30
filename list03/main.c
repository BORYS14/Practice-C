#include <stdio.h>

int main(void)
{
    int i,j;

    for (i = 1; i <= 3; i++)  {
        for ( j = 1; j <= i; j++) {
            putchar(' ');
        }
        for ( j = 5; j >= i * 2 - 1; j--) {
            putchar('*');
        }
        putchar('\n');
    }
    
    for (i = 2; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            putchar(' ');
        }
        for (j = 5; j >= i * 2 - 1; j--) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}