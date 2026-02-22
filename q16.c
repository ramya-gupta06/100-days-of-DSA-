/* Problem: Given an array of integers, count the frequency of each distinct element and print the result.

Input:
- First line: integer n (size of array)
- Second line: n integers

Output:
- Print each element followed by its frequency in the format element:count

Example:
Input:
5
1 2 2 3 1

Output:
1:2 2:2 3:1 */
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    // Input
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Frequency count
    for (int i = 0; i < n; i++) {
        int count = 0;
        int alreadyPrinted = 0;

        // Check if this element was already printed
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                alreadyPrinted = 1;
                break;
            }
        }

        if (alreadyPrinted)
            continue;

        // Count occurrences
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        printf("%d:%d ", arr[i], count);
    }

    return 0;
}