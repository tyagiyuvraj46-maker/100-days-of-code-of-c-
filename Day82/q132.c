/*
Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

Sample Test Cases:
Input 1:
GREEN
Output 1:
Go
Explanation 1:
When the enum value is GREEN, the program prints 'Go'.

*/

#include <stdio.h>
#include <string.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main() {
    char light[20];
    printf("Enter light (RED, YELLOW, GREEN): ");
    if (scanf("%s", light) == 1) {
        if (strcmp(light, "RED") == 0) printf("Stop\n");
        else if (strcmp(light, "YELLOW") == 0) printf("Wait\n");
        else if (strcmp(light, "GREEN") == 0) printf("Go\n");
        else printf("Invalid\n");
    }
    return 0;
}
