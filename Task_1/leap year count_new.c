#include <stdio.h>

int main() {
    // Array to store user input
    int numbers[10]; // Changed from arr to numbers
    int index;       // Loop counter
    int count = 0;   // Counter for numbers that meet criteria

    // Input 10 integers from the user
    printf("Enter 10 integers:\n");
    for (index = 0; index < 10; index++)
        {
        scanf("%d", &numbers[index]);
        }


    // Check each number for the specified conditions

    for (index = 0; index < 10; index++)// Check if the number is a 4-digit number
        {

        if (numbers[index] >= 1000 && numbers[index] < 10000) // Check if the number is divisible by 4
            {

            if (numbers[index] % 4 == 0)
                {
                count++; // Increment count if both conditions are met
                }
            }
        }

    // Output the result
    printf("Count of 4-digit numbers divisible by 4: %d\n", count);

    return 0;
}

// Example input: 2000 2001 2002 2003 2004 2005 2006 2007 2024 2020
// Expected output: Count of 4-digit numbers divisible by 4: 4
