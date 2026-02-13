#include <stdio.h>

void cubeElements(int *ptr, int size)
{
    int i, j;

    printf("Cubes of all elements:\n");

    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            int value = *(ptr + i + j);  
            int cube = value * value * value;

            printf("%d ", cube);
        }
        printf("\n");
    }
}

int main()
{
    int size, i, j;

    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size][size];

    printf("Enter array elements:\n");

    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    cubeElements(&arr[0][0], size);

    return 0;
}
