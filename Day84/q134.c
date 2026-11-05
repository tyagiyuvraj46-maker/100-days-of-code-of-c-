/*
Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed
Explanation 1:
FAILURE corresponds to a failed operation message.

*/

#include <stdio.h>
#include <string.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    char input[20];
    printf("Enter status (SUCCESS, FAILURE, TIMEOUT): ");
    if (scanf("%s", input) == 1) {
        if (strcmp(input, "SUCCESS") == 0) {
            printf("Operation successful\n");
        } else if (strcmp(input, "FAILURE") == 0) {
            printf("Operation failed\n");
        } else if (strcmp(input, "TIMEOUT") == 0) {
            printf("Operation timed out\n");
        }
    }
    return 0;
}
