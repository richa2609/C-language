#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter any numbers here: ");
    scanf("%d", &num);

    if (num == 0)
        count = 1;
    else {
        while (num != 0) {
            count++;
            num /= 10;
        }
    }

    printf("The Total number of digits are: %d", count);
    
    return 0;
}
