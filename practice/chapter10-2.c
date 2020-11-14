// ループなし
#include<stdio.h>
int main(void)
{
    int r;
    double s;

    printf("半径？:");
    scanf("%d", &r);
    if(r < 0) {
        printf("半径は負の値にはなりません。\n");
    }  else {
        s = r * r * 3.14;
        printf("面積は %f です。\n", s);
    }
    return 0;
}

// while文を使う
#include<stdio.h>
int main(void)
{
    int r;
    double s;

    printf("半径？:");
    scanf("%d", &r);

    while (r < 0) {
        printf("半径？:");
        scanf("%d", &r);
    }

    s = r * r * 3.14;
    printf("面積は%fです。\n", s);

    return 0;
    }


// do~while文を使う
#include<stdio.h>
int main(void)
{
    int r;
    double s;

    do {
        printf("半径？:");
        scanf("%d", &r);
    }  while (r < 0);
    // この;を忘れない！！！

    s = r * r * 3.14;
    printf("面積は%fです。\n", s);

    return 0;
}