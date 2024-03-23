/**
 * Reversing the content of an array
 */

#include <stdio.h>

void reverse(int array[], int size);

int main()
{
    int myArray[] = {5, 99, 19, 13, 10, 67, 89, 7, 0};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    reverse(myArray, size);

    for (int i = 0; i < size; i++)
    {
        printf("Array[%d] = %d\n", i, myArray[i]);
    }

    return 0;
}

void reverse(int array[], int size)
{
    int temp = 0;

    // Uses the temp variable to swap corresponding values at the start and end of the array, incrementing by 1 until we reach the middle of the array.
    for (int i = 0; i < (size / 2); i++)
    {
        temp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = temp;
    }
}
