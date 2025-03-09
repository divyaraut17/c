#include <stdio.h>

// Function to calculate the number of ways to climb stairs
int climbStairs(int n) {
    if (n <= 1) return 1;

    int first = 1, second = 1;
    for (int i = 2; i <= n; i++) {
        int temp = first + second;
        first = second;
        second = temp;
    }
    return second;
}

