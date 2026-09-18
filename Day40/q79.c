/*
Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) == 2) {
        int mat[r][c];
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) scanf("%d", &mat[i][j]);
        }
        int total = r + c - 1;
        int first = 1;
        for (int k = 0; k < total; k++) {
            if (k % 2 == 0) {
                int r_start = (k < r) ? k : r - 1;
                int r_end = (k - (c - 1) > 0) ? k - (c - 1) : 0;
                for (int i = r_start; i >= r_end; i--) {
                    int j = k - i;
                    if (!first) printf(" ");
                    printf("%d", mat[i][j]);
                    first = 0;
                }
            } else {
                int r_start = (k - (c - 1) > 0) ? k - (c - 1) : 0;
                int r_end = (k < r) ? k : r - 1;
                for (int i = r_start; i <= r_end; i++) {
                    int j = k - i;
                    if (!first) printf(" ");
                    printf("%d", mat[i][j]);
                    first = 0;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
