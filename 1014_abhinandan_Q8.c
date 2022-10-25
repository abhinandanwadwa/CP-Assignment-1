#include<stdio.h>

int main() {
    printf("\nAbhinandan Wadhwa - 1014 \n\n\n");

    int userId;
    float units;

    printf("Enter the user id of user\n");
    scanf("%d", &userId);

    char name[1000];
    printf("Enter the name of user\n");
    scanf("%s", name);

    printf("Enter the number of units consumed by user\n");
    scanf("%f", &units);
    
    float ans = 0;
    if (units == 0) {
        ans = 50.0;
    }
    if (units >= 0 && units <= 100) {
        ans = ans + (units*1);
    }
    else if (units >= 100 && units <= 300) {
        ans = ans + (units*2);
    }
    else if (units >= 300) {
        ans = ans + (units*3);
    }

    if (ans > 1000) {
        float additionalCharges = (0.15 * ans);
        ans += additionalCharges;
    }

    printf("Charge Details\n%d %s %f", userId, name, ans);
    
    return 0;
}