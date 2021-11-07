#include <stdio.h>
#include <string.h>

int MyAtoi(const char* c) {
    int res = 0;
    int state = 0;
    int i = 0;
    
    if (c[i] == '-') {
        state = -1;
        i++;
    }

    for (; i < strlen(c); i++) {
        while (!(c[i] >= '0' && c[i] <= '9')) {
            i++;
        }
        res = res * 10 + c[i] - '0';
        if (res < 0) {
            return -1;
        }
    }

    if (state == -1) {
        res = -res;
    }

    return res;
}

int main(void) {
    char str[100] = "382666";
    int a;

    a = MyAtoi(str);
    printf("%d\n",a);

    return 0;
}