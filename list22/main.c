//1021
#include <stdio.h>

int main(void) {
    char num[1001];
    int a[10] = {0};

    scanf("%s",num);

    for (int i = 0; num[i] != '\0'; i++) {  
        a[num[i]-'0']++;
    }
    for (int i = 0; i < 10; i++) {
        if (a[i] != 0) {
            printf("%d :%d\n",i,a[i]);
        }
    }

    return 0;
}