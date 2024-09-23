#include <stdio.h>
#include <string.h>

// Function to remove spaces from a string
void removeSpaces(char *inputString);

int main()
{
    char inputString[100]; // Array to hold the input string

    // Input a string from the user
        printf("Enter a string: ");
        gets(inputString);// Using gets for safer input


    // Trim spaces from the input string
        removeSpaces(inputString);

    return 0;
}

// Function to remove spaces from the string
void removeSpaces(char *inputString)
 {
    int length = strlen(inputString); // Get the length of the input string
    int i, j; // Loop counters

    // Iterate through the string to remove spaces
    for (i = 0; i < length; i++)
        {
        if (inputString[i] == ' '){ // Check for spaces
            // Shift characters left to remove the space
            for (j = i; j < length; j++)
            {
                inputString[j] = inputString[j + 1];
            }
            length--; // Decrease the length of the string
            i--; // Adjust index to account for the shifted characters
        }
    }

    // Output the modified string without spaces
    printf("String without spaces: %s\n", inputString);
}

/* Example input:
I am a student
Example output:
Iamastudent
*/
