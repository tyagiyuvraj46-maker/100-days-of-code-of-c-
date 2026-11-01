/*
Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92
Explanation 1:
Expected File Content (students.txt): Asha 101 85\nRavi 102 92

*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    if (scanf("%d", &n) == 1) {
        struct Student s[n];
        FILE *fp = fopen("students.txt", "w");
        for (int i = 0; i < n; i++) {
            printf("Enter Name, Roll, Marks for student %d: ", i + 1);
            scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
            fprintf(fp, "%s %d %d\n", s[i].name, s[i].roll, s[i].marks);
        }
        fclose(fp);

        fp = fopen("students.txt", "r");
        char name[50];
        int roll, marks;
        while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
            printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
        }
        fclose(fp);
    }
    return 0;
}
