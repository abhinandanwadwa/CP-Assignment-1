#include<stdio.h>

int sumOfDigitsOf(int n) {
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
    return sum;
}

int main() {
    printf("\nAbhinandan Wadhwa - 1014 \n\n\n");

    int n;
    printf("Enter the Number: ");
    scanf("%d", &n);

    int sumOfDigits = 0;
    int temp = n;
    while (temp != 0)
    {
        int digit = temp % 10;
        sumOfDigits += digit;
        temp /= 10;
    }

    int i;
    int ans = 0;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0) {
            ans += sumOfDigitsOf(i);
        }
    }

    if (sumOfDigits == ans) {
        printf("%d is a Smith number\n", n);
    }
    else {
        printf("%d is not a Smith number\n", n);
    }
    // printf("%d %d", sumOfDigits, ans);
    
    
    
    return 0;
}