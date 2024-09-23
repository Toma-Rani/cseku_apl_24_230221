#include <stdio.h>

int main()
 {
    int outerIndex, innerIndex, arraySize, temp; // Variable declarations

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &arraySize);

    int numbers[arraySize]; // Array to hold the input numbers

    // Input elements into the array
    printf("Enter %d numbers:\n", arraySize);

    for (outerIndex = 0; outerIndex < arraySize; outerIndex++)
        {
        scanf("%d", &numbers[outerIndex]);
        }

    // Sort the array in descending order using bubble sort
    for (outerIndex = 0; outerIndex < arraySize; outerIndex++)
        {
        for (innerIndex = outerIndex + 1; innerIndex < arraySize; innerIndex++)
         {
            // Swap if the current element is less than the next element
            if (numbers[innerIndex] > numbers[outerIndex])
             {
                temp = numbers[outerIndex];
                numbers[outerIndex] = numbers[innerIndex];
                numbers[innerIndex] = temp;
            }
        }
    }

    // Output the sorted array
    printf("Sorted numbers in descending order:\n");
    for (outerIndex = 0; outerIndex < arraySize; outerIndex++)
        {
        printf(" %d ", numbers[outerIndex]);
        }
        printf("\n"); // New line for better output formatting

    return 0;
}

/* Example input:
5
10 14 9 20 2
Example output:
20 14 10 9 2
*/
