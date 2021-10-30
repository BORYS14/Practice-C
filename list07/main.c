/*1002*/
#include <stdio.h>

int add_ecb(char num[]) {
    int i;
    int result;
    
    for (i = 0; num[i] != '\0'; i++) {
        result += num[i]-'0';
        }
    
    return result;
}

int main(void) {
    char num[110];
    scanf("%s",num);
    
    int addition = add_ecb(num);
    
    int i = 0;
    int y = addition;
    while (y != 0) {
        y /= 10;
        i++;
    }

    int bit[i];
    int x,j;
    for (j = 0; j < i; j++) {
        x = addition % 10;
        addition /= 10;
        bit[j] = x;
    }
    
    char chi_p[10][5] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};

    for (j = 0; j < i; i--) {
        printf("%s",chi_p[bit[i-1]]);
        if (i == j + 1) break;
        putchar(' ');
    }

    return 0;
}

