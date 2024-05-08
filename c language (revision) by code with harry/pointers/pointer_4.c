#include <stdio.h>

// Function to change the value to ten times of its current value
void tenTimes(int *num) {
    *num = (*num) * 10;
}

int main() {
    int num;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Changing the value using the function
    tenTimes(&num);

    // Output
    printf("Ten times of the number: %d\n", num);

    return 0;
}
