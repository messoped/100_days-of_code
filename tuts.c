//this is to learn function scopes as one function created could be used by another function 
#include <stdio.h>

double mult(double x, double y); //function declaration
double power(double x , int n); //function declaration


int main() {
   
    printf("%f\n" . mult(10.50, 17.23)); // mult called here in the test with x = 10.50 and y = 17.23

    return 0;
}

double mult(double x, double y){ //function defined
    return x * y;
}
double power(double x , int  n){ // function defined
    double result = x; //variable reult created and assigned to x called in the main the argument
    for ( i = 1; i < n; i++){ // this loop takes the integer until its greater than the i before closing 
        result = mult(result,x); // the idea is no power would be less than 1 for this script so if there is a power above one the loop runs
    }
    return result;
}
