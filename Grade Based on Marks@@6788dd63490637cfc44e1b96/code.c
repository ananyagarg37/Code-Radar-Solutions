#include <stdio.h>

int main() {
    int marks;
    char grade;

    // Reading the input marks
    scanf("%d", &marks);

    // Assigning grades based on marks
    if (marks >= 90) {
        grade = 'A';
    } else if (marks >= 80 && marks < 90) {
        grade = 'B';
    } else if (marks >= 70 && marks < 80) {
        grade = 'C';
    } else if (marks >= 60 && marks < 70) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // Printing the assigned grade
    printf("Grade: %c\n", grade);

    return 0;
}

