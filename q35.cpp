#include <stdio.h>

float getGradePoints(char grade) {
    switch (grade) {
        case 'A': return 4.0;
        case 'B': return 3.0;
        case 'C': return 2.0;
        case 'D': return 1.0;
        case 'F': return 0.0;
        default: return 0.0;
    }
}

int main() {
    char grade;
    int credits, totalCredits = 0;
    float totalPoints = 0.0, gpa;

    for (int i = 0; i < 5; i++) {
        printf("Enter the grade (A/B/C/D/F) and credits for course %d: ", i + 1);
        scanf(" %c %d", &grade, &credits);

        totalPoints += getGradePoints(grade) * credits;
        totalCredits

