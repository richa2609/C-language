#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, row, col, sum = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter row number: ");
    scanf("%d", &row);

    sum = 0;
    for(j = 0; j < c; j++)
        sum += a[row][j];
    printf("Sum of row %d = %d\n", row, sum);

    printf("Enter column number: ");
    scanf("%d", &col);

    sum = 0;
    for(i = 0; i < r; i++)
        sum += a[i][col];
    printf("Sum of column %d = %d", col, sum);

    return 0;
}
