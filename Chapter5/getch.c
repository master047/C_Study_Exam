#include <conio.h>
#include <stdio.h>

int main(void)
{
    int a;
    do{
        a = getch();
        printf("{%x}", a);
    }while(a!=0x61);

    printf("\nprogram ended.\n");
    return 0;
}