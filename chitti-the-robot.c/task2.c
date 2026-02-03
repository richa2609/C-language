#include <stdio.h> 

float calculateDiscount(int billAmount){
    if(billAmount>500)
        return billAmount *0.10;
    else
        return 0;
}

int main()
{
    float discount;
    discount = calculateDiscount(600);
    printf("Discount: %.2f\n", calculateDiscount(650));
    return 0;
}