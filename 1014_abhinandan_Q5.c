#include<stdio.h>

int main() {
    printf("\nAbhinandan Wadhwa - 1014 \n\n\n");

    int age;
    printf("Age:");
    scanf("%d", &age);

    if (age >= 0 && age <= 3) {
        printf("TODDLER\nALLOWED\n");
    }
    else if (age >= 4 && age <= 12) {
        printf("JUNIOR\nALLOWED\n");
    }
    else if (age >= 13 && age <= 17) {
        printf("TEENAGER\nALLOWED\n");
    }
    else {
        printf("NOT ALLOWED\n");
    }
    
    return 0;
}