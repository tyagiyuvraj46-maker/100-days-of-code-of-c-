/*
Q88: Replace spaces with hyphens in a string.

Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/

#include <stdio.h>

int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) != NULL) {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == ' ') {
                str[i] = '-';
            }
        }
        printf("%s", str);
        int len = 0;
        while (str[len] != '\0') len++;
        if (len > 0 && str[len - 1] != '\n') {
            printf("\n");
        }
    }
    return 0;
}
