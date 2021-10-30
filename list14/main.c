//1009
#include <stdio.h>
#include <string.h>

int main(void) {
    char str[81];
    int i,j;
    scanf("%[^\n]",str);

    for (i = strlen(str) - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            for (j = i + 1; str[j] != '\0' && str[j] != ' '; j++) {
                printf("%c",str[j]);
            }
            putchar(' ');
        }
        if (i == 0) {
            for (j = i; str[j] != ' ' && str[j] != '\0'; j++) {
                printf("%c",str[j]);
            }
        }
    }

    return 0;
}