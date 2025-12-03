#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    float marks;
};

int main() {
    int n;
    struct Student *students;

    // 1. Ask the user for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // 2. Dynamically allocate memory for n students
    students = (struct Student *)malloc(n * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // 3. Read data for each student
    for (int i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &students[i].marks);
    }

    // 4. Display students who scored more than 75
    printf("\nStudents with marks greater than 75:\n");
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].marks > 75) {
            printf("Name: %s, Marks: %.2f\n", students[i].name, students[i].marks);
            found = 1;
        }
    }

    if (!found) {
        printf("No student scored more than 75.\n");
    }

    // 5. Free allocated memory
    free(students);

    return 0;
}
