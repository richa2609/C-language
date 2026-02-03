#include <stdio.h> 

void superPower(int level)
{
    if(level==10)
        printf("Emergency! Flying Mode On!\n");
    else
        printf("Enery too low to Catch a flight.\n");
}

int main()
{
    superPower(9);
    return 0;
}