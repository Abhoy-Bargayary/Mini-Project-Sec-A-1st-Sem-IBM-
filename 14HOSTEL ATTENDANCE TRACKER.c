// Write the algorithm or C program to do the following:
// (a) Calculate and print the total number of days each student was present.
// Total present days = sum of each row.
// (b) Identify the student who has the highest attendance in the week.
// If two students have the same highest attendance, print the one with the lower student number.
// Find the day (1–7) on which overall hostel attendance was the lowest.

#include <stdio.h>

int main() {
    int A[10][7];
    int studentSum[10] = {0}; 
    int daySum[7] = {0};
    printf("Enter attendance for 10 students (1 = Present, 0 = Absent):\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d: ", i + 1);
        for (int j = 0; j < 7; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 7; j++) {
            studentSum[i] += A[i][j];
            daySum[j] += A[i][j];
        }
    }
    int maxAttendance = studentSum[0];
    int topStudent = 1;

    for (int i = 1; i < 10; i++) {
        if (studentSum[i] > maxAttendance) {
            maxAttendance = studentSum[i];
            topStudent = i + 1;
        }
    }
    int minAttendance = daySum[0];
    int minDay = 1;

    for (int j = 1; j < 7; j++) {
        if (daySum[j] < minAttendance) {
            minAttendance = daySum[j];
            minDay = j + 1;
        }
    }
    printf("\nWeekly Attendance Summary\n");
    printf("Total Present Days:\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d: %d\n", i + 1, studentSum[i]);
    }
    printf("\nStudent with Highest Attendance: Student %d (%d Days)\n",
           topStudent, maxAttendance);
    printf("\nDay with Lowest Overall Attendance: Day %d\n", minDay);

    return 0;
}
