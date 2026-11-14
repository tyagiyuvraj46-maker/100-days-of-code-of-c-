/*
Q143: Find and print the student with the highest marks.

Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)
Explanation 1:
Program compares marks of all students and prints the one with the highest.

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
    if (scanf("%d", &n) == 1 && n > 0) {
        struct Student s[n];
        int top_idx = 0;
        for (int i = 0; i < n; i++) {
            scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
            if (s[i].marks > s[top_idx].marks) {
                top_idx = i;
            }
        }
        printf("Topper: %s (Marks: %d)\n", s[top_idx].name, s[top_idx].marks);
    }
    return 0;
}
