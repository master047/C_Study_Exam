#include <stdio.h>
#include <float.h>

void Foo();

void Foo()
{
    {
        int x = 5;
        printf("x\n");
    }
    int x = 6;
    printf("x\n");
}

int main()
{
    Foo();
    return 0;
}

