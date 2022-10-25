#include<stdio.h>

int main() {
    printf("\nAbhinandan Wadhwa - 1014 \n\n\n");

    int lbX, lbY, len;
    printf("Enter the x-coordinate of the left bottom vertex\n");
    scanf("%d", &lbX);

    printf("Enter the y-coordinate of the left bottom vertex\n");
    scanf("%d", &lbY);

    printf("Enter the length of a side\n");
    scanf("%d", &len);

    int xCenter = lbX + (len/2);
    int yCenter = lbY + (len/2);

    printf("The centre of the room is at (%d,%d)\n", xCenter, yCenter);
    
    return 0;
}