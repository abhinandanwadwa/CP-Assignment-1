#include<stdio.h>

int main() {
    printf("\nAbhinandan Wadhwa - 1014 \n\n\n");

    int a, b, operation;
    printf("Enter the first value :\n");
    scanf("%d", &a);

    printf("Enter the second value :\n");
    scanf("%d", &b);

    printf("Enter the choice from the menu\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d", &operation);

    switch (operation)
    {
    case 1:
        printf("The value after Addition is %d.\n", a+b);
        break;
    case 2:
        printf("The value after Subtraction is %d.\n", a-b);
        break;
    case 3:
        printf("The value after Multiplication is %d.\n", a*b);
        break;
    case 4:
        printf("The value after Division is %d.\n", a/b);
        break;
    
    default:
        printf("Please enter a correct operation value\n");
        break;
    }
    return 0;
}