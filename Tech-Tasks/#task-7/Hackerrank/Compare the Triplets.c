#include <stdio.h>

int main() {
    int a[3], b[3];
    int aliceScore = 0, bobScore = 0;

    // Input Alice's ratings
    scanf("%d %d %d", &a[0], &a[1], &a[2]);

    // Input Bob's ratings
    scanf("%d %d %d", &b[0], &b[1], &b[2]);

    // Compare ratings and calculate scores
    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) {
            aliceScore++;
        } else if (a[i] < b[i]) {
            bobScore++;
        }
    }

    // Output the result
    printf("%d %d\n", aliceScore, bobScore);

    return 0;
}