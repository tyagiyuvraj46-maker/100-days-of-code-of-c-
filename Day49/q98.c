/*
Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[500];
    if (fgets(name, sizeof(name), stdin) != NULL) {
        int len = strlen(name);
        if (len > 0 && name[len - 1] == '\n') name[len - 1] = '\0';
        char words[10][100];
        int count = 0;
        char *token = strtok(name, " ");
        while (token != NULL && count < 10) {
            strcpy(words[count++], token);
            token = strtok(NULL, " ");
        }
        for (int i = 0; i < count - 1; i++) {
            printf("%c.", toupper(words[i][0]));
        }
        if (count > 0) {
            if (count > 1) printf(" ");
            printf("%s", words[count - 1]);
        }
        printf("\n");
    }
    return 0;
}
