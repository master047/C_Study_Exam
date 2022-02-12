#include <stdio.h>


int fact(int n);

int fact(int n)
{
    int f;
    if(n>1){
        f = n*fact(n-1);
    }else{
        f = 1;
    }
    return f;
}

int main()
{
    printf("fact = %d\n", fact(3));
    return 0;
}