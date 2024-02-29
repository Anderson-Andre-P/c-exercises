// Write a program that receives three real values and prints the sum of the squares of these three numbers.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double numberOne, numberTwo, numberThree, sumNumbers, squareOne, squareTwo, squareThree;

    printf("Type a number: ");
    scanf("%lf", &numberOne);
    setbuf(stdin, NULL);

    printf("Type a number: ");
    scanf("%lf", &numberTwo);
    setbuf(stdin, NULL);

    printf("Type a number: ");
    scanf("%lf", &numberThree);
    setbuf(stdin, NULL);

    squareOne = numberOne * numberOne;
    squareTwo = numberTwo * numberTwo;
    squareThree = numberThree * numberThree;

    sumNumbers = squareOne + squareTwo + squareThree;

    printf("The sum of all number is equal to %.2lf.\n", sumNumbers);

    return 0;
}
