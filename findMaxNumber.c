/**
 * Program: Find the maximum number in an array
 */

#include <stdio.h>

int find_max(int array[], int size);

int main(void)
{
    int myArrayOne[] = {5, 99, 19, 13, 10, 67, 89, 7, 0};
    int sizeOne = sizeof(myArrayOne) / sizeof(myArrayOne[0]);

    int maximumOne = find_min(myArrayOne, sizeOne);

    printf("Maximum value in array: %d\n", maximumOne);

    return 0;
}

int find_max(int array[], int size)
{
    int maximum = array[0];

    for (int i = 0; i < size; i++)
    {
        if (array[i] > maximum)
        {
            maximum = array[i];
        }
    }

    return maximum;
}
