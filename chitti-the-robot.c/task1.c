#include <stdio.h> 

void makeCoffee(int sugar){
    printf("Coffee is ready with %d spoons of sugar\n", sugar);
}

int main()
{
    makeCoffee(2);
    return 0;
}