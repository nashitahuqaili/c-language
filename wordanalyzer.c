#include <stdio.h>
#include <string.h>

int main() {
    char w[100], r[100];
    int i, len, pal = 1;

    scanf("%s", w);
    len = strlen(w);

    for (i = 0; i < len; i++) {
        r[i] = w[len - 1 - i];
    }
    r[len] = '\0';

    for (i = 0; i < len; i++) {
        if (w[i] != r[i]) {
            pal = 0;
        }
    }

    printf("Length: %d\n", len);
    printf("Reversed: %s\n", r);
    if (pal == 1) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}