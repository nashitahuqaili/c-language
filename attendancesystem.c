#include <stdio.h>

int main() {
    int m[5][4], sum[5] = {0}, top = 0;
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    printf("\nMarks Table:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", m[i][j]);
            sum[i] = sum[i] + m[i][j];
        }
        printf("\n");
        if (sum[i] > sum[top]) {
            top = i;
        }
    }

    for (i = 0; i < 5; i++) {
        printf("Student %d Total: %d\n", i + 1, sum[i]);
    }

    printf("Highest Scorer: Student %d (%d)\n", top + 1, sum[top]);
    return 0;
}