#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = -4321;
    char s[20];

    scanf("%19s", s); /* scanf always read stdin by %s, and input stdin to s, so, stdin is blank. */
    n = atoi(s);    /* atoi convert string to number, if s is not number string atoi return 0 */
    printf("You Input %d\n", n);

    fgets(s, sizeof(s), stdin); /* scanf didn't read stdin, so, stdin steal hold 'abc' */
    printf("stdin:%s\n", s);



    return 0;
}

