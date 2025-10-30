#include <stdio.h>

int main() {
    int i, j;          
    int rows = 7;      

    for (i = 1; i <= rows; i++) {

    
        for (j = i; j < rows; j++) {
            printf(" "); 
        }

        
        for (j = 1; j <= i; j++) {
            printf("* ");
        }

        printf(" | "); 


        for (j = i; j < rows; j++) {
            printf("  ");
        }

        // Print numbers from 1 to i
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        printf(" | "); // Separator between patterns


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
