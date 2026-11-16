/*
Q145: Return a structure containing top student's details from a function.

Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96
Explanation 1:
The function returns the structure containing the highest scoring student's details.

*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student getTopStudent(struct Student arr[], int n) {
    int top_idx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i].marks > arr[top_idx].marks) {
            top_idx = i;
        }
    }
    return arr[top_idx];
}

int main() {
    int n;
    printf("Enter number of students: ");
    if (scanf("%d", &n) == 1 && n > 0) {
        struct Student arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%s %d %d", arr[i].name, &arr[i].roll, &arr[i].marks);
        }
        struct Student top = getTopStudent(arr, n);
        printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll, top.marks);
    }
    return 0;
}
