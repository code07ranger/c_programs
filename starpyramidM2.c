// print the pyramid pattern
//       *
//     * * *
//   * * * * *
// * * * * * * *
#include <stdio.h>
int main() {
    int nst = 1;
    int nsp = 3;

    for (int i = 1; i <= 4; i++) {
        // Loop for printing spaces
        for (int k = 1; k <= nsp; k++) {
            printf("  ");
        }

        // Loop for printing stars
        for (int j = 1; j <= nst; j++) {
            printf("* ");
        }

        // Update logic for next row
        nsp--;
        nst += 2;
        printf("\n"); // Move to the next line
    }

    return 0;
}