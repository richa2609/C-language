#include <stdio.h>

void main()
{
    char str[50];
    int i, count[26] = {0};

    printf("Enter string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        count[str[i] - 'a']++;
    }

    printf("\nFrequency:\n");
    for (i = 0; i < 26; i++)
    {
        if (count[i] != 0)
            printf("%c => %d\n", i + 'a', count[i]);
    }
}
