#include <stdio.h>

void staircase(int n) {
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print '#' symbols
        for (int j = 1; j <= i; j++) {
            printf("#");
        }

        // Move to the next line
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);

    staircase(n);

    return 0;
}