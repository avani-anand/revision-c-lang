// create a 2-D array by taking input from the user . write a display function to print the content of the 2-D array in the screen in c language

#include <stdio.h>

// Function to take input for a 2D array
void inputArray(int rows, int cols, int arr[rows][cols]) {
    printf("Enter the elements of the 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

// Function to display the content of a 2D array
void displayArray(int rows, int cols, int arr[rows][cols]) {
    printf("The 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows for the 2D array: ");
    scanf("%d", &rows);
    printf("Enter the number of columns for the 2D array: ");
    scanf("%d", &cols);

    // Create a 2D array with user-defined dimensions
    int arr[rows][cols];

    // Input elements into the 2D array
    inputArray(rows, cols, arr);

    // Display the content of the 2D array
    displayArray(rows, cols, arr);

    return 0;
}
