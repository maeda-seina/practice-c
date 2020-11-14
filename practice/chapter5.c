#include<stdio.h>
    int main(void)
    {
        int water = 198, milk = 138;
        printf("%d円\n", (1000 - (int)(1.05 * (water + 2 * milk))));
        return 0;
    }