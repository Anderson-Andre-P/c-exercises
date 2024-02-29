// Write a program that asks the user to enter a float number and prints twice that number.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valueOne, twiceValue;

    printf("Type a number: ");
    scanf("%f", &valueOne);

    twiceValue = valueOne * 2;

    printf("twice the number entered is equal to %.2f", twiceValue);

    return 0;
}
