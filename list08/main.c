//1003
#include <stdio.h>
#include <string.h>

int judge(char str[]) {
    int i;
    int state = 0;
    int a_front = 0, a_mid = 0, a_later = 0;
    
    for (i = 0; i < strlen(str); i++) {
        if (str[i] != 'A' && str[i] != 'P' && str[i] != 'T') {
            return 0;
        } else if (str[i] == 'P') {
            if (state == 0) state = 1;
            else return 0;
        } else if (str[i] == 'T') {
            if (state == 1) state = 2;
            else return 0;
        } else if (str[i] == 'A') {
            if (state == 0) a_front++;
            else if (state == 1) a_mid++;
            else if (state == 2) a_later++;
        }
    }

    if (state != 2 || a_mid == 0) return 0;
    else if (a_front == a_later - (a_mid - 1)*a_front) return 1;
    else return 0;
}

int main(void) {
    int i;
    scanf("%d",&i);

    while (i) {    
        char str[101];
        scanf("%s",str);

        if (judge(str)) printf("YES\n");
        else printf("NO\n");

        i--;
    }
    
    return 0;
}