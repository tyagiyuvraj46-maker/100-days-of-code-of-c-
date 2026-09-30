/*
Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) != NULL) {
        int len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';
            len--;
        }
        char *word_start = str;
        char *ptr = str;
        while (*ptr) {
            if (*ptr == ' ') {
                reverse(word_start, ptr - 1);
                word_start = ptr + 1;
            }
            ptr++;
        }
        reverse(word_start, ptr - 1);
        printf("%s\n", str);
    }
    return 0;
}
