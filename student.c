#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent a student
typedef struct {
    int roll_no;
    char name[50];
    char gender;
    float marks[5];
    float percentage;
} Student;

// Function prototypes
void calculatePercentage(Student *student, int num_students);
void displayStudentsByPercentage(Student *students, int num_students);

int main() {
    int num_students;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    // Allocate memory for students
    Student *students = (Student *)malloc(num_students * sizeof(Student));

    // Input student records
    for (int i = 0; i < num_students; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Gender (M/F): ");
        scanf(" %c", &students[i].gender);
        printf("Enter marks for 5 subjects:\n");
        for (int j = 0; j < 5; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
        }
    }

    // Calculate percentage for each student
    calculatePercentage(students, num_students);

    // Display student list according to their percentages
    displayStudentsByPercentage(students, num_students);

    // Free allocated memory
    free(students);

    return 0;
}

// Function to calculate percentage for each student
void calculatePercentage(Student *students, int num_students) {
    for (int i = 0; i < num_students; i++) {
        float total_marks = 0;
        for (int j = 0; j < 5; j++) {
            total_marks += students[i].marks[j];
        }
        students[i].percentage = (total_marks / 5.0);
    }
}

// Function to display students sorted by percentage
void displayStudentsByPercentage(Student *students, int num_students) {
    // Sort students by percentage
    for (int i = 0; i < num_students - 1; i++) {
        for (int j = 0; j < num_students - i - 1; j++) {
            if (students[j].percentage < students[j + 1].percentage) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    // Display student list
    printf("\nStudent list sorted by percentage:\n");
    printf("Roll No\t Name\t\t Gender\t Percentage\n");
    for (int i = 0; i < num_students; i++) {
        printf("%d\t %s\t\t %c\t %.2f\n", students[i].roll_no, students[i].name, students[i].gender, students[i].percentage);
    }
}
