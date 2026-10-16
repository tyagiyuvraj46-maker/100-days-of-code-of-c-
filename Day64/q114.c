/*
Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3
Explanation 1:
The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.

Input 2:
s = "bbbbb"
Output 2:
1
Explanation 2:
The answer is "b", with the length of 1.

Input 3:
s = "pwwkew"
Output 3:
3
Explanation 3:
The answer is "wke", with the length of 3. Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter string: ");
    if (scanf("%s", s) == 1) {
        int n = strlen(s);
        int max_len = 0;
        for (int i = 0; i < n; i++) {
            int visited[256] = {0};
            for (int j = i; j < n; j++) {
                if (visited[(unsigned char)s[j]]) break;
                visited[(unsigned char)s[j]] = 1;
                int len = j - i + 1;
                if (len > max_len) max_len = len;
            }
        }
        printf("%d\n", max_len);
    }
    return 0;
}
