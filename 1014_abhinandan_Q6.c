#include<stdio.h>
#include<math.h>

int main() {
    printf("\nAbhinandan Wadhwa - 1014 \n\n\n");

    int n;
    printf("Enter the Number below:\n");
    scanf("%d", &n);

    int size = 0;
    int temp = n;
    while (temp != 0)
    {
        size++;
        temp /= 10;
    }

    int nSquared = n*n;

    int rightN = nSquared % (int)pow(10, size);
    int leftN = nSquared/(pow(10, size));
    

    if (leftN + rightN == n) {
        printf("Kaprekar Number\n");
    }
    else {
        printf("Not A Kaprekar Number\n");
    }
    
    return 0;
}