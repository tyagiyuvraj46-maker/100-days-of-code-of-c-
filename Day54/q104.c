/*
Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

Sample Test Cases:
Input 1:
n = 8
Output 1:
6
Explanation 1:
6 is the pivot integer since: 1 + 2 + 3 + 4 + 5 + 6 = 6 + 7 + 8 = 21.

Input 2:
n = 1
Output 2:
1
Explanation 2:
1 is the pivot integer since: 1 = 1.

Input 3:
n = 4
Output 3:
-1
Explanation 3:
It can be proved that no such integer exists.

*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter positive integer n: ");
    if (scanf("%d", &n) == 1) {
        long long total = (long long)n * (n + 1) / 2;
        int pivot = -1;
        for (int x = 1; x <= n; x++) {
            long long left = (long long)x * (x + 1) / 2;
            long long right = total - (long long)(x - 1) * x / 2;
            if (left == right) {
                pivot = x;
                break;
            }
        }
        printf("%d\n", pivot);
    }
    return 0;
}
