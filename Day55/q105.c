/*
Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3
Explanation 1:
Size = 3, Count of 3 = 2 → 2 > 3/2. Thus, 3 is the majority element.

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2
Explanation 2:
Size = 7, Count of 2 = 4 → 4 > 7/2. Thus, 2 is the majority element.

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1
Explanation 3:
Size = 8, Count of 2 = 4 → 4 is not strictly greater than 8/2. Hence, no majority element exists.

*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    if (scanf("%d", &n) == 1) {
        int nums[n];
        printf("Enter %d elements: ", n);
        for (int i = 0; i < n; i++) scanf("%d", &nums[i]);
        int majority = -1;
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (nums[j] == nums[i]) count++;
            }
            if (count > n / 2) {
                majority = nums[i];
                break;
            }
        }
        printf("%d\n", majority);
    }
    return 0;
}
