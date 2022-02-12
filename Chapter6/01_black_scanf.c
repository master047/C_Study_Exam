#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = -4321;
    char s[20];

    scanf("%d", &n);    /* if you input alphabet(eg. 'abc') scanf not work, so n is steal -4321, stdin hold 'abc' */
    printf("You Input %d\n", n);

    fgets(s, sizeof(s), stdin); /* stdin steal hold 'abc' */
    printf("stdin:%s\n", s);

    return 0;
}

