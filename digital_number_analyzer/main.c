#include <stdio.h>
#include "digit_analyzer.h"


int main(void){

    int userInput;
    int sum, count, reverse;

    printf("Please enter a positive integer: ");
    scanf("%d", &userInput);
    analyzer(userInput, &sum, &count, &reverse);

    printf("Sum: %d\n", sum);
    printf("Count: %d\n", count);
    printf("Reverse: %d\n", reverse);


    return 0;
}