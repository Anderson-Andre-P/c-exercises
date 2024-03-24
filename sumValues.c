#include <stdio.h>

int sum(int array[], int size);

int main()
{
    int myArray[] = {5, 99, 19, 13, 10, 67, 89, 7, 0};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    printf("Sum of elements of array: %d.\n", sum(myArray, size));

    return 0;
}

int sum(int array[], int size)
{
    int sumValues = 0;
    for (int i = 0; i < size; i++)
    {
        sumValues += array[i];
    }

    return sumValues;
}
