#include<stdio.h>
#include<string.h>

int main() {
    printf("\nAbhinandan Wadhwa - 1014 \n\n\n");

    int rollNo, marks;

    printf("Enter the roll number of student\n");
    scanf("%d", &rollNo);

    char name[1000];
    printf("Enter the name of student\n");
    scanf("%s", name);

    printf("Enter the total mark of student\n");
    scanf("%d", &marks);
    
    char grade[1000];
    if (marks >= 90 && marks <= 100) {
        strcpy(grade, "A");
    }
    else if (marks >= 80 && marks < 90) {
        strcpy(grade, "B");
    }
    else if (marks >= 70 && marks < 80) {
        strcpy(grade, "C");
    }
    else if (marks >= 60 && marks < 70) {
        strcpy(grade, "D");
    }
    else if (marks >= 50 && marks < 60) {
        strcpy(grade, "E");
    }
    else if (marks >= 40 && marks < 50) {
        strcpy(grade, "F");
    }
    else if (marks >= 0 && marks < 40) {
        strcpy(grade, "Fail");
    }

    printf("Grade Details\n%d %s %d %s\n", rollNo, name, marks, grade);
    
    return 0;
}