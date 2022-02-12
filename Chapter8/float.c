#include <stdio.h>
#include <float.h>

void bit_print(int type, unsigned char * vp);

int main()
{
    float f;
    int in = 0x12345678;
    unsigned char *cp, *cp2;
    //f = 0.2f;
    //f = FLT_MIN;
    f = 0.0f;
    cp = (unsigned char *)&f;
    cp2= (unsigned char *)&in;

    printf("%02X, %02X, %02X, %02X\n",  (unsigned char)(*cp), (unsigned char)*(cp+1), (unsigned char)*(cp+2), (unsigned char)*(cp+3) );
    bit_print(0, cp);

    printf("%2X, %2X, %2X, %2X\n",  (unsigned char)(*cp2), (unsigned char)*(cp2+1), (unsigned char)*(cp2+2), (unsigned char)*(cp2+3) );
    bit_print(1, cp2);

    printf("%p, %e\n", &f, f);

    return 0;
}

void bit_print(int n, unsigned char *vp)    /* float n=0, int n=1 */
{
    for( int i = 3 ; i >= 0 ; i--){
        for( int j = 7 ; j >= 0 ; j--){
            printf("%d", ( ( (unsigned char)*(vp+i) ) & ( 1 << j ) )?1:0 );
            if ( n == 0){
                if ( (i ==3 && j == 7 ) || (i ==2 && j == 7 )) printf(" ");
            }else{
                if ( j == 0 ) printf(" ");
            }
        }
    }
    printf("\n");
}