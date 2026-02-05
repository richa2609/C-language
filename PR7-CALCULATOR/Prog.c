#include <stdio.h>

/* User Defined Functions */
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    return a / b;
}
int mod(int a, int b)
{
    return a % b;
}

void main()
{
    int ch, a, b;

    do
    {
        printf("\nPress 1 for +");
        printf("\nPress 2 for -");
        printf("\nPress 3 for *");
        printf("\nPress 4 for /");
        printf("\nPress 5 for %%");
        printf("\nPress 0 for exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &ch);

        if (ch == 0)
            break;

        printf("Enter first number: ");
        scanf("%d", &a);
        printf("Enter second number: ");
        scanf("%d", &b);

        switch (ch)
        {
        case 1:
            printf("Addition of %d and %d is %d", a, b, add(a, b));
            break;
        case 2:
            printf("Subtraction of %d and %d is %d", a, b, sub(a, b));
            break;
        case 3:
            printf("Multiplication of %d and %d is %d", a, b, mul(a, b));
            break;
        case 4:
            printf("Division of %d and %d is %d", a, b, div(a, b));
            break;
        case 5:
            printf("Modulus of %d and %d is %d", a, b, mod(a, b));
            break;
        default:
            printf("Invalid choice");
        }
    } while (ch != 0);
}
