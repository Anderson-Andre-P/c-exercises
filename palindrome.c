// Checking whether a string is a palindrome
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char string[]);

int main()
{
    char stringOne[] = "Not palindrome";
    char stringTwo[] = "abcdcba";

    if (isPalindrome(stringOne))
    {
        printf("The string \"%s\" is a palindrome!", stringOne);
    }
    else
    {
        printf("The string \"%s\" not is a palindrome!", stringOne);
    }

    puts("");

    if (isPalindrome(stringTwo))
    {
        printf("The string \"%s\" is a palindrome!", stringTwo);
    }
    else
    {
        printf("The string \"%s\" not is a palindrome!", stringTwo);
    }

    puts("");

    return 0;
}

bool isPalindrome(char string[])
{
    int len = strlen(string);
    int middle = len / 2;

    for (int i = 0; i < middle; i++)
    {
        if (string[i] != string[len - i - 1])
            return false;
    }

    return true;
}
