/*
Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt
Explanation 1:
Expected File (destination.txt): Learning C File Handling

*/

#include <stdio.h>

int main() {
    char src[100], dest[100];
    printf("Enter source filename: ");
    if (scanf("%s", src) == 1) {
        printf("Enter destination filename: ");
        scanf("%s", dest);
        FILE *f_src = fopen(src, "r");
        if (f_src == NULL) {
            printf("Error opening source file!\n");
            return 0;
        }
        FILE *f_dest = fopen(dest, "w");
        if (f_dest == NULL) {
            fclose(f_src);
            printf("Error opening destination file!\n");
            return 0;
        }
        int ch;
        while ((ch = fgetc(f_src)) != EOF) {
            fputc(ch, f_dest);
        }
        fclose(f_src);
        fclose(f_dest);
        printf("File copied successfully to %s\n", dest);
    }
    return 0;
}
