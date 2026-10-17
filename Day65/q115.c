/*
Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram
Explanation 1:
The strings contain the same characters with the same frequencies.

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram
Explanation 2:
The strings do not contain the same characters.

*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[500], t[500];
    if (scanf("%s %s", s, t) == 2) {
        if (strlen(s) != strlen(t)) {
            printf("Not Anagram\n");
            return 0;
        }
        int freq[26] = {0};
        for (int i = 0; s[i]; i++) freq[s[i] - 'a']++;
        for (int i = 0; t[i]; i++) freq[t[i] - 'a']--;
        int ok = 1;
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) { ok = 0; break; }
        }
        printf("%s\n", ok ? "Anagram" : "Not Anagram");
    }
    return 0;
}
