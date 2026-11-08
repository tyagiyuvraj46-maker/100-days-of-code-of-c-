/*
Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!
Explanation 1:
Enum value determines which message is displayed.

*/

#include <stdio.h>
#include <string.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    char role[20];
    printf("Enter role (ADMIN, USER, GUEST): ");
    if (scanf("%s", role) == 1) {
        if (strcmp(role, "ADMIN") == 0) printf("Welcome Admin!\n");
        else if (strcmp(role, "USER") == 0) printf("Welcome User!\n");
        else if (strcmp(role, "GUEST") == 0) printf("Welcome Guest!\n");
        else printf("Invalid role\n");
    }
    return 0;
}
