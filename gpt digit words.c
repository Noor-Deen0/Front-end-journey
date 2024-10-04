#include <stdio.h>

int main() {
    int number, right_digit, temp;
    char *digitWords[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    // Ask the user to enter the number
    printf("Enter an integer: ");
    scanf("%i", &number);
    
    // Special case: If the user enters zero, print "zero" immediately
    if (number == 0) {
        printf("zero\n");
        return 0;
    }

    // If the number is negative, print the negative sign and work with the positive version
    if (number < 0) {
        printf("minus ");
        number = -number;
    }
    
    // Store digits in reverse order by extracting them
    int digits[10];  // Array to store up to 10 digits (assuming int limit)
    int count = 0;   // To keep track of the number of digits
    
    temp = number;
    while (temp > 0) {
        right_digit = temp % 10;  // Extract the last digit
        digits[count] = right_digit;  // Store the digit
        count++;
        temp /= 10;  // Remove the last digit
    }
    
    // Print the digits in correct order (reverse of how they were stored)
    for (int i = count - 1; i >= 0; i--) {
        printf("%s ", digitWords[digits[i]]);
    }
    
    printf("\n");  // New line at the end

    return 0;
}
