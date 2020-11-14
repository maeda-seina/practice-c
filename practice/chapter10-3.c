#include<stdio.h>

int main(void)
{
    int score;

    do {
        printf("点数を入力してください:");
        scanf("%d", &score);
    }  while (score < 0 || score > 100);

    printf("点数は%d点です。\n", score);
    return 0;
}