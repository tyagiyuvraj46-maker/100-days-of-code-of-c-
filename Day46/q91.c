/*
Q91: Remove all vowels from a string.

Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    if (scanf("%s", str) == 1) {
        int j = 0;
        for (int i = 0; str[i] != '\0'; i++) {
            char lower = tolower(str[i]);
            if (lower != 'a' && lower != 'e' && lower != 'i' && lower != 'o' && lower != 'u') {
                str[j++] = str[i];
            }
        }
        str[j] = '\0';
        printf("%s\n", str);
    }
    return 0;
}
