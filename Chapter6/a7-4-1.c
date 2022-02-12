#include <stdio.h>
#include <string.h>

int main(void)
{
    char *p_str[7] = {"red", "orange", "greenish yellow", "pink", "dark green", "lemon yellow", "white"};

    for(int i=0; i < 7 ; i++){
        printf("%s : %d\n", p_str[i], strlen(p_str[i]));
    }

    return 0;
}