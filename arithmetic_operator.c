#include <stdio.h>

int main(){

    int x = 345;
    int y = 234;

    int sum = x + y;
    int mult = x * y;
    int sub = x - y;
    int div = x / y;
    int mod = x % y;

    printf("Addition of x and y is: %d \n" , sum);
    printf("Multiplication of x and y is: %d \n", mult);
    printf("Subtraction of x and y is: %d \n", sub);
    printf("Division of x and  y is: %d \n", div);
    printf("Modulus of x and y is: %d \n", mod);


return 0;
}
