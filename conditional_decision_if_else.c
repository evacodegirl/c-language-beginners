//1.Find a max from two number.Numbers are given from standard input.

#include <stdio.h>

int main() {
    //First we declare two integer which we will use in our program;
    int x;
    int y;

    printf("Insert two numbers:");
    scanf("%d %d", &x, &y); //Use scanf to read our number from input;

    if(x > y) //If the condition is true and x is larger than y, print maximum is x;
        printf("Maximum is: %d \n", x);
    else //If the condition is wrong and x<y than print maximum is y;
        printf("Maximum is: %d \n", y);

return 0;
}
