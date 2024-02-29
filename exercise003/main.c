// Write a program that takes an integer and displays the square of that number.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, squareNumber;
    printf("Type a number: ");
    scanf("%d", &number);

    squareNumber = number * number;

    printf("The square of %d is equal to %d.\n", number, squareNumber);

    return 0;
}
