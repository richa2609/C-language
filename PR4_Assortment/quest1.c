#include <stdio.h>

int main() {
    int a[50], n, i;

    printf("Enter array size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Negative elements: ");
    for(i = 0; i < n; i++) {
        if(a[i] < 0) {
            printf("%d ", a[i]);
        }
    }
    return 0;
}
