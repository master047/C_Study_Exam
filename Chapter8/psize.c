#include <stdio.h>
#include <float.h>

int main(void)
{
    int *p = NULL;
    printf("size of pointer = %d\n", sizeof(p));
    printf("size of char : %d\n", sizeof(char) );
    printf("size of int : %d\n", sizeof(int) );
    printf("size of long : %d\n", sizeof(long) );
    printf("size of longlong : %d\n", sizeof(long long) );
    printf("size of float : %d\n", sizeof(float) );
    printf("size of double : %d\n", sizeof(double) );
    printf("size of long double : %d\n", sizeof(long double) );
    printf("max of float : %e\n", FLT_MAX );
    printf("max of double : %e\n", DBL_MAX );
    printf("max of long double : %e\n", LDBL_MAX );
    return 0;
}