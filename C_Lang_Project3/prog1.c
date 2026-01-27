#include <stdio.h>

int main() {
    char ri = 'a';

    do {
        printf("%c ", ri);
        ri = ri + 4;  
    } while (ri <= 'z');

    return 0;
    
}