#include <stdio.h>
#include <string.h>

int main(void)
{
    char *p_str[7] = {"red", "orange", "greenish yellow", "pink", "dark green", "lemon yellow", "white"};

    for(int i=0; i < 7 ; i++){
        for(int j=strlen(p_str[i])-1 ; j>=0 ; j--) putchar(p_str[i][j]);
        putchar('\n');
    }

    return 0;
}