#include <stdio.h>

int main(){

    // DECLARATION: variable_type name = value;
    int x = 5; //integer/ also for integer we can use short and long;
    float y = 5.5; //float number / we can use double;
    char v = 'v'; //we use char for character;
    int input_variable; // we can use variables which we will initialize from standard input later in our code;



    //Output with function printf;
    printf("I will learn C language \n"); //Print some string;
    printf("The integer is %d \n", x );
    printf("The float number is %.1f \n", y);
    printf("The character is %c \n", v);

    //Input with function scanf;
    printf("Insert a variable: ");
    scanf("%d" , &input_variable);
    printf("Your variable is %d \n" ,input_variable);

    return 0;

}
