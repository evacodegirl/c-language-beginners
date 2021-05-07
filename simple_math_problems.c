#include <stdio.h>

int main() {

   //squared number;
    int x;
    printf("Insert integer:");
    scanf("%d", &x);

    printf("The squared number of %d is %d \n", x , x * x );

    //arithmetic mean
    int m = 30;
    int n = 50;
    float arithmetic_mean = (m + n) / 2.0;

    printf("The arithmetic mean of %d and %d is: %.1f \n ", m, n, arithmetic_mean);

}
