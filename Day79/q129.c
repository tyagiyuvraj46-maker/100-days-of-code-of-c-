/*
Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00
Explanation 1:
The program reads integers from the file, computes their total sum (150), and calculates the average (30.00).

*/

#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error opening numbers.txt!\n");
        return 0;
    }
    int val;
    int sum = 0, count = 0;
    while (fscanf(fp, "%d", &val) == 1) {
        sum += val;
        count++;
    }
    fclose(fp);
    if (count > 0) {
        double avg = (double)sum / count;
        printf("Sum = %d\nAverage = %.2f\n", sum, avg);
    } else {
        printf("No numbers found\n");
    }
    return 0;
}
