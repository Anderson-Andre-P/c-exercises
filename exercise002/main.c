// Write a program that reads three integers and prints their sum.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numberOne, numberTwo, numberThree, sumNumbers;

    printf("Type a number: ");
    scanf("%d", &numberOne);
    setbuf(stdin, NULL);

    printf("Type a number: ");
    scanf("%d", &numberTwo);
    setbuf(stdin, NULL);

    printf("Type a number: ");
    scanf("%d", &numberThree);
    setbuf(stdin, NULL);

    sumNumbers = numberOne + numberTwo + numberThree;

    printf("The sum of all number is equal to %d.", sumNumbers);

    return 0;
}
