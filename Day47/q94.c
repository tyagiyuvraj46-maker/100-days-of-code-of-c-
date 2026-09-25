/*
Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) != NULL) {
        char longest[1000] = "";
        char current[1000] = "";
        int max_len = 0;
        int curr_len = 0;

        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] != ' ' && str[i] != '\n' && str[i] != '\r' && str[i] != '\t') {
                current[curr_len++] = str[i];
            } else {
                if (curr_len > max_len) {
                    current[curr_len] = '\0';
                    strcpy(longest, current);
                    max_len = curr_len;
                }
                curr_len = 0;
            }
        }
        if (curr_len > max_len) {
            current[curr_len] = '\0';
            strcpy(longest, current);
            max_len = curr_len;
        }
        printf("%s\n", longest);
    }
    return 0;
}
