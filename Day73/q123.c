/*
Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2
Explanation 1:
The file has 31 characters including spaces and newlines, 5 words, and 2 lines.

*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100];
    printf("Enter filename: ");
    if (scanf("%s", filename) == 1) {
        FILE *fp = fopen(filename, "r");
        if (fp == NULL) {
            printf("Error: Could not open file %s\n", filename);
            return 0;
        }
        int ch;
        int characters = 0, words = 0, lines = 0;
        int in_word = 0;
        while ((ch = fgetc(fp)) != EOF) {
            characters++;
            if (ch == '\n') lines++;
            if (isspace(ch)) {
                in_word = 0;
            } else if (!in_word) {
                in_word = 1;
                words++;
            }
        }
        fclose(fp);
        printf("Characters: %d\nWords: %d\nLines: %d\n", characters, words, lines);
    }
    return 0;
}
