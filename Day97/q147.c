/*
Q147: Store employee data in a binary file using fwrite() and read using fread().

Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.
Explanation 1:
Demonstrates writing and reading structures using binary file handling functions.

*/

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp_write;
    printf("Enter Employee Name, ID, Salary: ");
    if (scanf("%s %d %f", emp_write.name, &emp_write.id, &emp_write.salary) == 3) {
        FILE *fp = fopen("employee.bin", "wb");
        if (fp != NULL) {
            fwrite(&emp_write, sizeof(struct Employee), 1, fp);
            fclose(fp);
            printf("Employee data written to binary file.\n");
        }

        struct Employee emp_read;
        fp = fopen("employee.bin", "rb");
        if (fp != NULL) {
            if (fread(&emp_read, sizeof(struct Employee), 1, fp) == 1) {
                printf("Read from file: Name: %s | ID: %d | Salary: %.2f\n",
                       emp_read.name, emp_read.id, emp_read.salary);
            }
            fclose(fp);
        }
    }
    return 0;
}
