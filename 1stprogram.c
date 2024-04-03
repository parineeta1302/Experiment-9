#include <stdio.h>

int main() {
    int total_classes_held, classes_attended;
    float attendance_percentage;
    printf("Number of classes held: ");
    scanf("%d", &total_classes_held);
    printf("Number of classes attended: ");
    scanf("%d", &classes_attended);
    attendance_percentage = ((float)classes_attended / total_classes_held) * 100;
    printf("Attendance percentage: %.2f%%\n", attendance_percentage);
    if (attendance_percentage >= 75) {
        printf("Student is allowed to sit in the exam.\n");
    } else {
        printf("Student is not allowed to sit in the exam.\n");
    }
    return 0;
}
