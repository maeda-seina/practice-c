#include<stdio.h>

int main(void)
{
    int no;
    printf("月を入力してください(1~12):");
    scanf("%d", &no);
    switch (no) {
    case 1:
        printf("睦月\n");
        break;
    case 2:
        printf("如月\n");
        break;
    case 3:
        printf("弥生\n");
        break;
    case 4:
        printf("卯月\n");
        break;
    case 5:
        printf("皐月\n");
        break;
    case 6:
        printf("水無月\n");
        break;
    case 7:
        printf("文月\n");
        break;
    case 8:
        printf("葉月\n");
        break;
    case 9:
        printf("長月\n");
        break;
    case 10:
        printf("神奈月\n");
        break;
    case 11:
        printf("霜月\n");
        break;
    case 12:
        printf("師走\n");
        break;
    default:
        printf("そんな月はない\n");
        break;
    }
    return 0;
}