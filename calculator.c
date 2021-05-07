#include <stdio.h>

int main(){
    //Declaration of two variables;
    int x;
    int y;

    printf("Insert first integer:");
    scanf("%d", &x);//Input for our first integer;
    printf("Insert second integer:");
    scanf("%d", &y);//Input for our second integer;

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
