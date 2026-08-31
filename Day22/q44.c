/*
Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        double sum = 0.0;
        int num = 1;
        int den = 1;
        for (int i = 1; i <= n; i++) {
            sum += (double)num / den;
            num += 2;
            den += 2;
        }
        printf("Approximate sum: %.1f\n", sum);
    }
    return 0;
}
