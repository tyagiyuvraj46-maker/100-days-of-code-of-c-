/*
Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING
Explanation 1:
All lowercase letters in input.txt are converted to uppercase using character manipulation before writing to output.txt.

*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *f_in = fopen("input.txt", "r");
    if (f_in == NULL) {
        printf("Error: Cannot open input.txt\n");
        return 0;
    }
    FILE *f_out = fopen("output.txt", "w");
    if (f_out == NULL) {
        fclose(f_in);
        printf("Error: Cannot open output.txt\n");
        return 0;
    }
    int ch;
    while ((ch = fgetc(f_in)) != EOF) {
        fputc(toupper(ch), f_out);
    }
    fclose(f_in);
    fclose(f_out);
    printf("Converted successfully to output.txt\n");
    return 0;
}
