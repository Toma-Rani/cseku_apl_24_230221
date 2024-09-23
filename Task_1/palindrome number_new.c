#include <stdio.h>

int main() {
    int originalNumber; // Original number input by the user
    int reversedNumber = 0; // Variable to store the reversed number
    int currentDigit; // Variable to hold the current digit during extraction

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &originalNumber);

    // Store the original number for comparison later
    int numberToCheck = originalNumber;

    // Reverse the number
    while (numberToCheck != 0)
        {
        currentDigit = numberToCheck % 10; // Extract the last digit
        reversedNumber = reversedNumber * 10 + currentDigit; // Build the reversed number
        numberToCheck = numberToCheck / 10; // Remove the last digit
        }

    // Check if the original number is equal to the reversed number
    if (reversedNumber == originalNumber)
        {
        printf("YES\n"); // Output YES if the number is a palindrome
        }
    else
        {
        printf("NO\n"); // Output NO if the number is not a palindrome
        }

    return 0;
}

// Example input: 121, output: YES
// Example input: 134, output: NO
