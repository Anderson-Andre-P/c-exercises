#include <stdio.h>
#include <stdlib.h>

int printOutput(int start, int limit) {
    if (start <= limit) {
        printf("%d ", start);
        start = start + 1;
        printOutput(start, limit);
    }

}

int main()
{
    int start, limit;

    start = 10;
    limit = 20;
    printOutput(start, limit);
/*
    for (int i = start; i <= limit; i++) {
        printf("%d ", i);
    }
*/
    return 0;
}
