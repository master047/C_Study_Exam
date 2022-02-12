#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int arr[10] = {10, 15, 22, 45, 9, 66, 71, 4, 37, 82};
    int *p = arr;

    int max=*p, min=*p, sum = 0;
    double avg;

    for(int i = 0 ; i < 10 ; i++){
        sum += *(p+i);
        if ( i > 0 ){
            max = ( *(p+i) > *(p+i-1 ) ) ? *(p+i) : max; 
            min = ( *(p+i) < *(p+i-1 ) ) ? *(p+i) : min; 
        }
    }

    avg = sum/10.0;



    printf("%d\n", sum);
    printf("%.1f\n", avg);
    printf("%d\n", max);
    printf("%d\n", min);

    return 0;
}