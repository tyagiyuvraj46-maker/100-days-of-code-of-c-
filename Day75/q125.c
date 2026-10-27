/*
Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.
Explanation 1:
Output File (data.txt after execution): Hello world\nThis is appended text.

*/

#include <stdio.h>
#include <string.h>

int main() {
    char filename[100];
    printf("Enter filename: ");
    if (scanf("%s", filename) == 1) {
        getchar(); // consume newline
        char text[500];
        printf("Enter text to append: ");
        if (fgets(text, sizeof(text), stdin) != NULL) {
            FILE *fp = fopen(filename, "a");
            if (fp != NULL) {
                fputs(text, fp);
                fclose(fp);
                printf("File updated successfully with appended text.\n");
            } else {
                printf("Error opening file!\n");
            }
        }
    }
    return 0;
}
