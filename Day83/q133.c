/*
Q133: Create an enum for months and print how many days each month has.

Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days
Explanation 1:
February has 28 days in a normal year and 29 in a leap year.

*/

#include <stdio.h>
#include <string.h>

int main() {
    char month[20];
    printf("Enter month abbreviation (e.g. FEB, JAN): ");
    if (scanf("%s", month) == 1) {
        if (strcmp(month, "FEB") == 0) {
            printf("28 or 29 days\n");
        } else if (strcmp(month, "APR") == 0 || strcmp(month, "JUN") == 0 ||
                   strcmp(month, "SEP") == 0 || strcmp(month, "NOV") == 0) {
            printf("30 days\n");
        } else {
            printf("31 days\n");
        }
    }
    return 0;
}
