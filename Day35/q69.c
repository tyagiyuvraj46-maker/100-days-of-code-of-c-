/*
Q69: Find the second largest element in an array.

Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/

#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1 && n >= 2) {
        int arr[n];
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        int largest = INT_MIN, second = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (arr[i] > largest) {
                second = largest;
                largest = arr[i];
            } else if (arr[i] > second && arr[i] != largest) {
                second = arr[i];
            }
        }
        if (second == INT_MIN) {
            second = largest;
        }
        printf("%d\n", second);
    }
    return 0;
}
