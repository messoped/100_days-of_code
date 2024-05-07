// this program would allow the user to input a float and use a function to understand how function scope works


#include <stdio.h>
#include <string.h>
float user_decimal;//variable to hold user's input with the data type of a float
float mul_float ( float n);// function mulfloat declaration
int main() {
    // Write C code here
    printf("enter a decimal number:");
    scanf("%f", &user_decimal);
    printf("%f\n", mul_float(user_decimal));// function mul_float being printed with the argument(user_decimal_

    return 0;
}
float mul_float(float n){// mul_float being defined here with a variable of n which is being changed by user after input
    n = n * 3;
    return n;
}
