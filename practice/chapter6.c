#include <stdio.h>

int main(void)
{
    int price;
    scanf("%d", &price);
    printf("%d, %d, %d, %d\n", (int)(price * 0.9), (int)(price * 0.7), (int)(price * 0.5), (int)(price * 0.2));
    return 0;
}