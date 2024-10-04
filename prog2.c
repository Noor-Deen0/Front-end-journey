#include <stdio.h>

int main(void) {
    int n, number, triangularNumber, counter = 1, num_of_calc;

    // Ask the user how many triangular numbers they want to calculate
    printf("How many triangular numbers do you want to calculate? ");
    scanf("%i", &num_of_calc);

    // Loop through the number of calculations requested by the user
    while (counter <= num_of_calc) {
        // Prompt the user to input the nth triangular number they want
        printf("What triangular number do you want? ");
        scanf("%i", &number);

        // Reset variables
        triangularNumber = 0;
        n = 1;  // Initialize n for the inner loop

        // Calculate the triangular number
        while (n <= number) {
            triangularNumber += n;
            ++n;  // Increment n inside the loop
        }

        // Print the result for the user
        printf("Triangular number %i is %i\n\n", number, triangularNumber);

        ++counter;  // Increment counter after each triangular number calculation
    }

    return 0;
}