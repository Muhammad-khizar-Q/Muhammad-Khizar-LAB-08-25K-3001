#include <stdio.h>

int main() {
    int i, j, space;

    for (i = 1; i <= 5; i++) {
        for (space = i; space < 5; space++) printf("  ");
        for (j = 1; j <= i; j++) printf("* ");
        printf(" | ");
        for (space = i; space < 5; space++) printf("  ");
        for (j = 1; j <= i; j++) printf("%d ", j);
        printf(" | ");
        for (space = i; space < 5; space++) printf("  ");
        for (j = 0; j < i; j++) printf("%c ", 'A' + j);

        printf("\n");
    }

    return 0;
}

