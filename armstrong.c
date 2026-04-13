//wap to print out all armstrong three digit numbers
//If sum of cubes of each digit of number is equal to the number itself
// Ex::153=(1*1*1)+(5*5*5)+(3*3*3)
#include <stdio.h>
int main() {
    int number, originalNumber, remainder, result = 0;
    // Input number from user
    printf("Enter a three-digit number: ");
    scanf("%d", &number);
    originalNumber = number;  // Store the original number to compare later
    // Process each digit of the number
    for (int i=1;originalNumber != 0;i++) {
        remainder = originalNumber % 10;  // Extract the last digit
        result += remainder * remainder * remainder;  // Add the cube of the digit
        originalNumber /= 10;  // Remove the last digit
    }
    // Check if the result equals the original number
    if (result == number)
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}