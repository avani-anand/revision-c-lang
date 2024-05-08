// //try problem 4 using call by value and verify that it does not change the value of the said variable

#include <stdio.h>

int tenTimes(int num) {
    return num * 10;
}

int main() {
    int num;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Changing the value using the function
    int newNum = tenTimes(num);

    // Output
    printf("Ten times of the number: %d\n", newNum);
    printf("Original number remains unchanged: %d\n", num);

    return 0;
}
