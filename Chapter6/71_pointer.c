#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char str[] = "AbcDefGHijk1234lmNOP";
    char *p = str;

    while( *p != '\0'){
        if ( islower(*p) ){
            *p = (char)toupper((int)*p);
        }
        p++;
    }

    printf("%s\n", str);

    return 0;
}