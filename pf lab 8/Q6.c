#include <stdio.h>

int main() {
    int i, j;          // Loop counters
    int rows = 5;      // Total number of rows to print

    // Outer loop controls the number of lines (rows)
    for (i = 1; i <= rows; i++) {

        // ---------- FIRST SECTION: Stars (right aligned) ----------
        // Print spaces first so that stars appear right-aligned
        for (j = i; j < rows; j++) {
            printf("  "); // Two spaces for each missing star
        }

        // Print stars for current row
        for (j = 1; j <= i; j++) {
            printf("* ");
        }

        printf(" | "); // Separator between patterns


        // ---------- SECOND SECTION: Numbers (right aligned) ----------
        // Again, print spaces to align numbers to the right
        for (j = i; j < rows; j++) {
            printf("  ");
        }

        // Print numbers from 1 to i
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        printf(" | "); // Separator between patterns


        // ---------- THIRD SECTION: Alphabets (right aligned) ----------
        // Print spaces to right align letters
        for (j = i; j < rows; j++) {
            printf("  ");
        }

        // Print letters from A to corresponding letter
        for (j = 1; j <= i; j++) {
            printf("%c ", 'A' + j - 1);
        }

        // Move to the next line after one complete row
        printf("\n");
    }

    return 0;
}
