/**
 * Program: Find the maximum number in an array with your position
 */

#include <stdio.h>

struct MaxPosition
{
    int max_value;
    int position;
};

struct MaxPosition find_max(int array[], int size);

int main(void)
{
    int myArrayOne[] = {5, 99, 19, 13, 10, 67, 89, 7, 0};
    int sizeOne = sizeof(myArrayOne) / sizeof(myArrayOne[0]);

    struct MaxPosition result = find_max(myArrayOne, sizeOne);

    printf("Maximum value in array: %d\n", result.max_value);
    printf("Position of maximum value: %d\n", result.position);

    return 0;
}

struct MaxPosition find_max(int array[], int size)
{
    struct MaxPosition maxPos;
    maxPos.max_value = array[0];
    maxPos.position = 0;

    for (int i = 0; i < size; i++)
    {
        if (array[i] > maxPos.max_value)
        {
            maxPos.max_value = array[i];
            maxPos.position = i;
        }
    }

    return maxPos;
}
