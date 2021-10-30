#include <stdio.h>

int main(void)
{
    int a,b,c;

    printf("请输入两门课的成绩：");
    do {
        scanf("%d%d",&a,&b);
        while (a > 100 || b > 100 || a < 0 || b < 0){
            printf("It is error.\n");
            break;
        }
    } while (a > 100 || b > 100 || a < 0 || b < 0) ;

    switch (a >= 60 && b >= 60) {
    case 1:printf("It is pass."); break;
    case 0:printf("It is not pass."); break;
    }

    return 0;
}