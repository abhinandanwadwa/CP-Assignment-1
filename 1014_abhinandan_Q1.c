#include<stdio.h>

int main() {
    printf("\nAbhinandan Wadhwa - 1014 \n\n\n");

    int n;
    printf("Enter the Number:\n");
    scanf("%d", &n);

    if (n & 1) {
        // odd
        printf("Odd\n");
    }
    else {
        // even
        printf("Even\n");
    }

    return 0;
}