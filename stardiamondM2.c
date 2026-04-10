//wap to print the given pattern
//       *
//     * * *
//   * * * * *
// * * * * * * *
//   * * * * *
//     * * *
//       *
#include <stdio.h>
int main() {
    int nst = 1;   // Number of stars
    int nsp = 3;   // Number of spaces
    int a = 5, b = 1;

    // Upper part of the diamond (including the middle line)
    for (int i = 1; i <= 4; i++) {
        // Print spaces
        for (int k = 1; k <= nsp; k++) {
            printf("  ");
        }
        // Print stars
        for (int j = 1; j <= nst; j++) {
            printf("* ");
        }
        nsp--;
        nst += 2;
        printf("\n");
    }

    // Lower part of the diamond
    for (int i = 1; i <= 3; i++) {
        // Print spaces
        for (int k = 1; k <= b; k++) {
            printf("  ");
        }
        // Print stars
        for (int j = 1; j <= a; j++) {
            printf("* ");
        }
        b++;
        a -= 2;
        printf("\n");
    }

    return 0;
}