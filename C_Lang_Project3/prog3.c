#include <stdio.h>

int main() {
    int num, first, last;

    printf("Enter numbers as per your wish: ");
    scanf("%d", &num);

    last = num % 10;          // last digit

    while (num >= 10) {
        num /= 10;
    }
    first = num;              // first digit

    printf("The sum of the first and the last digit: %d", first + last);
    return 0;
}
