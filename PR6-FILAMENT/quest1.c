#include <stdio.h>

void main()
{
    char str[50];
    int i, len = 0, flag = 1;

    printf("Enter a string here: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
        len++;

    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("The given string is a Palindrome.");
    else
        printf("The given string is NOT a Palindrome.");
}
