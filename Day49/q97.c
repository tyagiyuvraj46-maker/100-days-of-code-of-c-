/*
Q97: Print the initials of a name.

Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[500];
    if (fgets(name, sizeof(name), stdin) != NULL) {
        int len = strlen(name);
        if (len > 0 && name[len - 1] == '\n') name[len - 1] = '\0';
        int is_new_word = 1;
        for (int i = 0; name[i] != '\0'; i++) {
            if (name[i] != ' ' && is_new_word) {
                printf("%c.", toupper(name[i]));
                is_new_word = 0;
            } else if (name[i] == ' ') {
                is_new_word = 1;
            }
        }
        printf("\n");
    }
    return 0;
}
