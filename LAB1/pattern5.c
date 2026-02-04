#include <stdio.h>

int main() {
    int rows, coef = 1, space, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i = 0; i < rows; i++) {
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0) {
                coef = 1;
            } else {
                coef = coef * (i - j + 1) / j;
            }

            printf("%4d", coef); // Print the coefficient with a width of 4 for alignment
        }

        printf("\n"); // Move to the next line after printing each row
    }

    return 0;
}

