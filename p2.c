#include <stdio.h>
void main()
{
    int x, y, num = 1;
    for(x = 1; x <= 4; x++)
    {
        for(y = 1; y <= x; y++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}