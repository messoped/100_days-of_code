//This code would take inputs from a user and then check if its a prime number if its a prime number it allows the user to get into a game prompt

#include <stdio.h> // standard library in c
#include <math.h> // library for math in c to help us use the sqrt function in c

int main(){
	int i, number, flag = 0; // the flag variable would help us to store the answer from our loops making our code much efficient
	// The user inputs the value that gets stored in the number variable
	// The i variable would be initialized to 2 as we want to find factors of prime.

        printf("Input option:)";
	scanf("%d", &number);

	for ( i = 2; i <= sqrt(number); i++){//The loop here would take the input from user and go find the square root (sqrt) of the number from user and divide it by the variable i to see it gives an answer of 0. the reason for the sqrt is that we don't want to go through lots of numbers but we just find the sqrt of the number.
					     //we also divide by 2 in the for loop because with primes we need 2 factors.
	if (number % i == 0){
	printf("this is not a prime number");
	flag = 1;// The flag here gets updated to 1 if there is a factor found
	break;
	}
	}

	if (flag == 0){//if the flag is 0 meaning no factors found so the number is a prime
	printf("This is a prime number");
	}
}

