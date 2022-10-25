#include<stdio.h>

int main() {
    printf("\nAbhinandan Wadhwa - 1014 \n\n\n");

    int n, t;
    printf("Number of students:\n");
    scanf("%d", &n);

    printf("Number of Teams:\n");
    scanf("%d", &t);

    int eachTeamStrength = n/t, leftOut = n%t;
    printf("The number of students in each team is %d and left out is %d\n", eachTeamStrength, leftOut);
    return 0;
}