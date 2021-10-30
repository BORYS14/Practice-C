//1014
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char a [61],b[61],c[61],d[61];
    char week[7][4] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
    int state = 1;
    int x,y,z;

    scanf("%s%s%s%s",a,b,c,d);
    for (int i = 0; i < 61; i++) {
        if (a[i] == b[i]) {
            if (a[i] >= 'A' && b[i] <= 'G' && state == 1) {
                x = a[i] - 'A';
                state = 2;
                continue;
            } 
            if (state == 2) {
                if (isdigit(a[i])) {   //isdigit()查看数组内元素是否是数字
                    y = a[i] - '0';
                    break;
                } else if(a[i] >= 'A' && b[i] <= 'N') {
                    y = a[i] + 10 - 'A';
                    break;
                }
            }
        }
    }

    for (int i = 0; i < 61; i++) {
        if (isalpha(c[i]) && c[i] == d[i]) { //isalpha()查看数组内元素是否是字母
            z = i;
            break;
        }
    }

    printf("%s %02d:%02d",week[x],y,z);

    return 0;
}