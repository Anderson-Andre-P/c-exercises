/**
 * Program: Find the minimum number in an array
 */

#include <stdio.h>

int find_min(int array[], int size);

int main(void)
{
    int myArrayOne[] = {5, 99, 19, 13, 10, 67, 89, 7, 0};
    int sizeOne = sizeof(myArrayOne) / sizeof(myArrayOne[0]);

    int minimumOne = find_min(myArrayOne, sizeOne);

    printf("Minimum value in array: %d\n", minimumOne);

    return 0;
}

int find_min(int array[], int size)
{
    int minimum = array[0];

    for (int i = 0; i < size; i++)
    {
        if (array[i] < minimum)
        {
            minimum = array[i];
        }
    }

    return minimum;
}
