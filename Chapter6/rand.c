#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int a, b, op, result;
    //printf("%d\n", RAND_MAX);

    srand((unsigned)time(NULL));

    a = rand()%100 + 1;
    b = rand()%100 + 1;
    op = rand()%4;

    

    for(int i=1;i<=10;i++){
        printf("%d ", rand()%10 + 1);
    }

    return 0;
}