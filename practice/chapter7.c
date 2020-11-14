#include<stdio.h>
// 1896から夏季
// 1924から冬季
// 1992までは同じ年に開催されていたということは考慮しないものとする。
int main(void)
{
    int year,y1,y2;
    scanf("%d", &year);
    y1 = year % 4;
    y2 = year % 2;
    if (year < 1894)
        printf("まだ開かれてない");
    if (year >= 1894 && y1 == 0)
        printf("夏季オリンピックが開かれる。");
    if (year >= 1924 && y2 == 0 && y1 != 0)
        printf("冬季オリンピックが開かれる。");
    if (year >= 1894 && y2 != 0)
        printf("オリンピックは開かれない。");
    return 0;
}