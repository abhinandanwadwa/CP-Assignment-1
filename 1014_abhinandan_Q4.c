#include<stdio.h>

int main() {
    printf("\nAbhinandan Wadhwa - 1014 \n\n\n");

    float oldPrice, repairAmt, sellingPrice;
    printf("Price of old scooter:\n");
    scanf("%f", &oldPrice);
    
    printf("Repair Amount:\n");
    scanf("%f", &repairAmt);

    float costPrice = oldPrice + repairAmt;
    
    printf("Selling Price:\n");
    scanf("%f", &sellingPrice);

    float gainPercentage = ((sellingPrice-costPrice)/costPrice) * (100.0);

    printf("Gain percentage is %f\n", gainPercentage);

    
    return 0;
}