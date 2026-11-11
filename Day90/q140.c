/*
Q140: Define a struct with enum Gender and print person's gender.

Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male
Explanation 1:
The enum inside the struct allows representing gender as a named constant.

*/

#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    char g[20];
    printf("Enter Gender (MALE, FEMALE, OTHER): ");
    if (scanf("%s", g) == 1) {
        struct Person p;
        if (strcmp(g, "MALE") == 0 || strcmp(g, "Gender=MALE") == 0) p.gender = MALE;
        else if (strcmp(g, "FEMALE") == 0 || strcmp(g, "Gender=FEMALE") == 0) p.gender = FEMALE;
        else p.gender = OTHER;

        switch (p.gender) {
            case MALE: printf("Male\n"); break;
            case FEMALE: printf("Female\n"); break;
            case OTHER: printf("Other\n"); break;
        }
    }
    return 0;
}
