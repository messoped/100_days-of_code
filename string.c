// this program expands on my string lessons with the use of arrays and slice the string into char
#include <stdio.h>

int main() {
    // Write C code here
    char string_1[200];
    printf("type a welcome message to guests:");
    fgets(string_1, 200, stdin); // the f_gets function takes string better than scanf as scanf reads the string to find whitespaces
    
    for (int i = 0; i <= 200; i++){ // the for loop goes through string for characters
        if (string_1[i] == '\0') //null this stops a string array 
        printf("string_1[%d] = \\0 \n", i);
    else
     printf("string_1[%d] =%c\n" ,i, string_1[i]); 
     //the %c is a string identifier
    }
    
    printf("%s\n", string_1);
    

    return 0;
}



