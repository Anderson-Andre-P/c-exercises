/*
 * Count occurrences of a value in an array
 */
#include <stdio.h>

int occurrences(int array[], int size, int numberToFind);

int main()
{
    int myArray[] = {5, 99, 19, 13, 10, 67, 89, 7, 0, 10, 10, 0, 0, 0, 5, 66, 99};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    int findValue = 10;

    int numberOfOccurrences = occurrences(myArray, size, 10);

    printf("Value %d found %d times in array.\n", findValue, numberOfOccurrences);

    return 0;
}

int occurrences(int array[], int size, int numberToFind)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (array[i] == numberToFind)
            count++;
    }
    return count;
}
