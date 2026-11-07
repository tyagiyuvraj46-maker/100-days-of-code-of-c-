/*
Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30
Explanation 1:
The enum ADD triggers addition of 10 and 20.

*/

#include <stdio.h>
#include <string.h>

enum Operation { ADD = 1, SUBTRACT, MULTIPLY };

int main() {
    char op_name[20];
    int a, b;
    printf("Enter operation and two numbers: ");
    if (scanf("%s %d %d", op_name, &a, &b) == 3) {
        enum Operation op = 0;
        if (strcmp(op_name, "ADD") == 0) op = ADD;
        else if (strcmp(op_name, "SUBTRACT") == 0) op = SUBTRACT;
        else if (strcmp(op_name, "MULTIPLY") == 0) op = MULTIPLY;

        switch (op) {
            case ADD: printf("%d\n", a + b); break;
            case SUBTRACT: printf("%d\n", a - b); break;
            case MULTIPLY: printf("%d\n", a * b); break;
            default: printf("Invalid\n"); break;
        }
    }
    return 0;
}
